#pragma once

// @title 素因数分解(O(√n))
template <typename T>
vector<pair<T, T>> prime_factorize(T N) {
  vector<pair<T, T>> res;
  for (T p = 2; p * p <= N; ++p) {
    if (N % p == 0) {
      res.emplace_back(p, 0);
      while (N % p == 0) {
        res.back().second++;
        N /= p;
      }
    }
  }
  if (N != 1) res.emplace_back(N, 1);
  return res;
}
