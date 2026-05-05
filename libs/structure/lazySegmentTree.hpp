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
  int clz(int x) {
    if (x == 0) return 32;
    int res = 0;
    for (int i = 31; i >= 0; i--) {
      if ((x >> i) & 1) break;
      res++;
    }
    return res;
  }
  void set(int i, T x) {
    i += n - 1;
    for (int j = 31 - clz(i); j >= 0; j--) eval((i >> j), 0, 0);
    node[i] = x;
    for (int j = 1; j <= 31 - clz(i); j++)
      node[i >> j] = op(node[(i >> j) * 2 + 1], node[(i >> j) * 2 + 2]);
  }
  T operator[](int i) {
    i += n - 1;
    for (int j = 31 - clz(i); j >= 0; j--) eval((i >> j), 0, 0);
    return node[i];
  }
};