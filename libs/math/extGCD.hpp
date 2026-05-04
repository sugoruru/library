#pragma once

// @title 拡張ユークリッドの互除法
template <typename T>
pair<T, T> extgcd(T a, T b) {
  if (b == 0) return make_pair(1, 0);
  auto [y, x] = extgcd(b, a % b);
  y -= a / b * x;
  return make_pair(x, y);
}
