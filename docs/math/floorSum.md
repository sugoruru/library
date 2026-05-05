---
title: floor sum
documentation_of: ../../libs/math/floorSum.hpp
---

## 概要

$\sum_{i=0}^{n-1} \left\lfloor \frac{a i + b}{m} \right\rfloor$ を計算する.

## 使い方

- `floor_sum(n, m, a, b)` := 上記の和を計算する.

## 計算量

- `floor_sum(n, m, a, b)` : $O(\log(\max(a, b, m)))$
