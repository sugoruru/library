#pragma once

// @title べき乗mod
template <typename T>
T powMod(T a, int64_t b, T m) {
  T res = 1;
  a = a % m;
  while (b > 0) {
    if (b & 1) (res *= a) %= m;
    (a *= a) %= m;
    b >>= 1;
  }
  return res;
}