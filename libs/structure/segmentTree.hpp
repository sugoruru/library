#pragma once

template <typename T, auto op, auto e>
struct SegTree {
  int n;
  vector<T> seg;
  SegTree(const vector<T>& a) {
    int sz = a.size();
    n = 1;
    while (n < sz) n <<= 1;
    seg.resize(2 * n - 1, e());
    for (int i = 0; i < sz; i++) seg[i + n - 1] = a[i];
    for (int i = n - 2; i >= 0; i--)
      seg[i] = op(seg[2 * i + 1], seg[2 * i + 2]);
  }
  void set(int x, T val) {
    x += n - 1;
    val = op(val, seg[x]);
    seg[x] = val;
    while (x > 0) {
      x = (x - 1) / 2;
      seg[x] = op(seg[2 * x + 1], seg[2 * x + 2]);
    }
  }
  T prod(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r < 0) r = n;
    if (r <= a || b <= l) return e();
    if (a <= l && r <= b) return seg[k];
    T vl = prod(a, b, 2 * k + 1, l, (l + r) / 2);
    T vr = prod(a, b, 2 * k + 2, (l + r) / 2, r);
    return op(vl, vr);
  }
  T get(int x) {
    return seg[x + n - 1];
  }
};