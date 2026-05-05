---
title: 行列累乗(O(N^3 \log n))
documentation_of: ../../../libs/math/linearAlgebra/powMatrix.hpp
---

## 概要

行列 $A$ の $n$ 乗を計算する関数.

## 使い方

- `powMatrix(A, n, mod)` := 行列 $A$ の $n$ 乗を計算し、要素を $\text{mod}$ で割った余りを返す関数.
  - $\text{mod}$ を省略した場合は、要素をそのまま返す.

## 計算量

- `powMatrix(A, n, mod)` : 行列のサイズを $N$ とすると、計算量は $O(N^3 \log n)$.
