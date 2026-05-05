---
title: 2次元累積和
documentation_of: ../../libs/algorithm/cumulativeSum2D.hpp
---

## 概要

2次元配列の累積和を計算するためのデータ構造.

## コンストラクタ

```
(1) CumulativeSum2D(const vector<vector<int>>& a)
```

(1) は2次元配列 $a$ を受け取り、累積和を計算する.
計算量: $O(HW)$

## 使い方

- `query(x1, y1, x2, y2)` : 2次元配列の部分和を返す. $O(1)$

## 計算量

- `query` : $O(1)$
