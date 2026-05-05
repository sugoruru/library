#pragma once

// @title 二項係数mod
template <typename T = int64_t>
struct NCR {
  int max = 1000030;
  T mod;
  vector<T> fact, inv, invf;
  NCR(T mod = 998244353, int max = 1000030) {
    this->mod = mod, this->max = max;
    fact.resize(max, 1);
    inv.resize(max, 1);
    invf.resize(max, 1);
    for (int i = 2; i < max; i++) {
      fact[i] = fact[i - 1] * i % mod;
      inv[i] = mod - inv[mod % i] * (mod / i) % mod;
      invf[i] = invf[i - 1] * inv[i] % mod;
    }
  }
  T nCr(T n, T r) {
    if (n < r) return 0;
    if (n < 0 || r < 0) return 0;
    T x = fact[n];
    T y = invf[n - r];
    T z = invf[r];
    return x * ((y * z) % mod) % mod;
  }
};