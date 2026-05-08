#pragma once
#include "../structure/BIT.hpp"
template <typename T>

T inversion_number(const vector<T>& a, bool compress = false) {
  if (compress) {
    auto b = a, v = a;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (auto& x : b) x = lower_bound(v.begin(), v.end(), x) - v.begin();
    return inversion_number(b);
  }
  BIT<T> bit(a.size());
  T ans = 0;
  for (int i = a.size(); i--;) {
    ans += bit.sum(a[i]);
    bit.add(a[i], 1);
  }
  return ans;
}