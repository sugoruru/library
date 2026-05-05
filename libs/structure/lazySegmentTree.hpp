#pragma once

template <typename T, typename F, auto op, auto e, auto mapping,
          auto composition, auto id>
struct LazySegTree {
  int n;
  vector<T> node;
  vector<F> lazy;
  LazySegTree(const vector<T>& v) {
    int sz = v.size();
    n = 1;
    while (n < sz) n <<= 1;
    node.resize(2 * n - 1, e());
    lazy.resize(2 * n - 1, id());
    for (int i = 0; i < sz; i++) node[i + n - 1] = v[i];
    for (int i = n - 2; i >= 0; i--)
      node[i] = op(node[2 * i + 1], node[2 * i + 2]);
  }
  void eval(int k, int l, int r) {
    node[k] = mapping(lazy[k], node[k]);
    if (r - l > 1) {
      lazy[2 * k + 1] = composition(lazy[k], lazy[2 * k + 1]);
      lazy[2 * k + 2] = composition(lazy[k], lazy[2 * k + 2]);
    }
    lazy[k] = id();
  }
  void apply(int a, int b, F x, int k = 0, int l = 0, int r = -1) {
    if (r < 0) r = n;
    eval(k, l, r);
    if (b <= l || r <= a) return;
    if (a <= l && r <= b) {
      lazy[k] = composition(x, lazy[k]);
      eval(k, l, r);
    } else {
      apply(a, b, x, 2 * k + 1, l, (l + r) / 2);
      apply(a, b, x, 2 * k + 2, (l + r) / 2, r);
      node[k] = op(node[2 * k + 1], node[2 * k + 2]);
    }
  }
  T prod(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r < 0) r = n;
    if (b <= l || r <= a) return e();
    eval(k, l, r);
    if (a <= l && r <= b) return node[k];
    T vl = prod(a, b, 2 * k + 1, l, (l + r) / 2);
    T vr = prod(a, b, 2 * k + 2, (l + r) / 2, r);
    return op(vl, vr);
  }
  void set(int i, T x) {
    int idx = i + n, h = 0;
    while ((1 << h) < n) h++;
    for (int s = h; s > 0; s--) {
      int k = (idx >> s) - 1;
      eval(k, 0, 1 << s);
    }
    int ld = idx - 1;
    eval(ld, 0, 1);
    node[ld] = x;
    while (ld > 0) {
      ld = (ld - 1) / 2;
      node[ld] = op(node[2 * ld + 1], node[2 * ld + 2]);
    }
  }
  T operator[](int i) {
    int idx = i + n, h = 0;
    while ((1 << h) < n) h++;
    for (int s = h; s > 0; s--) {
      int k = (idx >> s) - 1;
      eval(k, 0, 1 << s);
    }
    eval(idx - 1, 0, 1);
    return node[idx - 1];
  }
};