---
title: 行列積(O(N^3))
documentation_of: ../../libs/math/linearAlgebra/matrixProduct.hpp
---

## 概要

行列積を計算する関数

## 使い方

- `matrixProduct(A, B, mod)` := 行列 $A$ と $B$ の積を計算し、要素を $\text{mod}$ で割った余りを返す関数.
  - $\text{mod}$ を省略した場合は、要素をそのまま返す.

## 計算量

- `matrixProduct(A, B, mod)` : 行列のサイズを $N$ とすると、計算量は $O(N^3)$.
