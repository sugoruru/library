#pragma once

template <typename T>
struct BIT {
  int n;
  vector<T> bits;
  BIT(int n) : n(n), bits(n + 1, 0) {}
  void add(int i, T x) {
    for (++i; i <= n; i += i & -i) bits[i] += x;
  }
  T sum(int i) {
    T s = 0;
    for (; i > 0; i -= i & -i) s += bits[i];
    return s;
  }
  T sum(int l, int r) { return sum(r) - sum(l); }
};