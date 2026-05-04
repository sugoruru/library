---
title: UnionFind(DSU)
documentation_of: ../../libs/dataStructure/unionFind.hpp
---

## 概要

通常のUnionFind(データの集合を素集合に分割して保存するデータ構造).

## コンストラクタ

```
(1) UnionFind(int N)
```

(1) は頂点数を $N$ として初期化される.
計算量: $O(N)$

## 使い方

- `root(x)` := 頂点 $x$ の属するグループのrootを取得する.
- `unite(x, y)` := 頂点 $x$ と頂点 $y$ を同じグループにまとめる.
- `same(x, y)` := 頂点 $x$ と頂点 $y$ が同じグループに属しているかを判定する.
- `size(x)` := 頂点 $x$ の属するグループの大きさを求める.

## 計算量

- `root(x)` := $O(\alpha(N))$
- `unite(x, y)` := $O(\alpha(N))$
- `same(x, y)` := $O(\alpha(N))$
- `size(x)` := $O(\alpha(N))$
