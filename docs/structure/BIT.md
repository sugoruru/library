---
title: Binary Indexed Tree (BIT)
documentation_of: ../../libs/structure/BIT.hpp
---

## 概要

一点加算・区間和取得が高速に行えるデータ構造.

## コンストラクタ

```
(1) BIT(int N)
```

(1) は要素数を $N$ として初期化される.  
計算量: $O(N)$

## 使い方

- `add(i, x)` := index $i$ に値 $x$ を加える.
- `sum(i)` := 区間 $[0, i)$ までの和を求める.
- `sum(l, r)` := 区間 $[l, r)$ までの和を求める.

## 計算量

- `add(i, x)` の計算量: $O(\log N)$
- `sum(i)` の計算量: $O(\log N)$
- `sum(l, r)` の計算量: $O(\log N)$
