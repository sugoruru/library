#pragma once

// @title 素数判定(O(√n))
template <typename T>
bool isPrime(T n) {
  if (n <= 1) return false;
  for (T i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}