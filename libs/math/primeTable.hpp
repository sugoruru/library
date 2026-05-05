#pragma once

template <typename T>
vector<bool> primeTable(T n) {
  vector<bool> primes(n + 1, true);
  primes[0] = primes[1] = false;
  for (T i = 2; i * i <= n; i++) {
    if (primes[i]) {
      for (T cur = i * 2; cur <= n; cur += i) {
        primes[cur] = false;
      }
    }
  }
  return primes;
}
