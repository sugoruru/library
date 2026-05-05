#pragma once
#include "primeTable.hpp"

template <typename T>
vector<T> primeList(T n) {
  vector<bool> primes = primeTable(n);
  vector<T> res;
  for (T i = 2; i <= n; i++) {
    if (primes[i]) res.push_back(i);
  }
  return res;
}