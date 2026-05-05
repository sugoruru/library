---
title: セグメント木
documentation_of: ../../libs/structure/segmentTree.hpp
---

## 概要

任意のモノイド $(S, \oplus, e)$ に対して、区間 $[l, r)$ の値を $O(\log N)$ で求めることができるデータ構造.

## コンストラクタ

```
(1) SegTree(vector<T> &a)
```

(1) は、配列 $a$ を元に、セグメント木を構築する.  
計算量: $O(N)$

## 使い方

## クエリの種類

- `S`: 区間の型.
- `op`: 区間の結合演算.
- `e`: 区間の単位元.

- `set(int x, T val)` : $x$ 番目の値を $val$ に更新する.
- `prod(int l, int r)` : 区間 $[l, r)$ の値を求める.
- `get(int x)` : $x$ 番目の値を求める.

## 計算量

- `set(int x, T val)` : $O(\log N)$
- `prod(int l, int r)` : $O(\log N)$
- `get(int x)` : $O(1)$
