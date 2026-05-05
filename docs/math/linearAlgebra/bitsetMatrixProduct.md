---
title: $\mathbb{F}_2$ 上での行列積(O(N^3/w))
documentation_of: ../../../libs/math/linearAlgebra/bitsetMatrixProduct.hpp
---

## 概要

$\mathbb{F}_2$ 上での行列積を計算する関数.

## 使い方

- `bitsetMatrixProduct(A, B)` := 行列 $A$ と $B$ の積を計算する関数. ただし、要素は $\mathbb{F}_2$ 上の値である.

## 計算量

- `bitsetMatrixProduct(A, B)` : 行列のサイズを $N$ とすると、計算量は $O(N^3/w)$.
  - $w$ はビット演算のワードサイズ(=64).
