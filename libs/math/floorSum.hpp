#pragma once

template <typename T>
T floor_sum(T n, T m, T a, T b) {
  T ans = 0;
  if (a >= m) ans += (n - 1) * n * (a / m) / 2, a %= m;
  if (b >= m) ans += n * (b / m), b %= m;
  T y = (a * n + b) / m, x = y * m - b;
  if (y != 0)
    ans += (n - (x + a - 1) / a) * y + floor_sum(y, a, m, (a - x % a) % a);
  return ans;
}