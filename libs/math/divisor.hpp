#pragma once

// @title 約数列挙(O(√N)).
template <typename T>
vector<T> divisor(T N) {
  vector<T> res;
  for (T i = 1; i * i <= N; ++i) {
    if (N % i == 0) {
      res.push_back(i);
      if (i * i != N) res.push_back(N / i);
    }
  }
  sort(res.begin(), res.end());
  return res;
}