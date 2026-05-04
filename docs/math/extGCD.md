---
title: 拡張ユークリッドの互除法
documentation_of: ../../libs/math/extGCD.hpp
---

## 概要

$2$ つの整数 $a$ と $b$ に対して、$ax + by = \gcd(a, b)$ を満たす整数 $x$ と $y$ を求める.

## 使い方

- `extgcd(a, b)` := $ax + by = \gcd(a, b)$ を満たす整数 $x$ と $y$ を返す.

## 計算量

- `extgcd(a, b)` : $O(\log \min(a, b))$
