---
title: UnionFind(DSU)
documentation_of: libs/DataStructure/UnionFind.hpp
---

## 概要

通常のUnionFind(データの集合を素集合に分割して保存するデータ構造).

## コンストラクタ

```
(1) UnionFind(int N)
```

(1) は頂点数を $N$ として初期化される.

## 使い方

- `root(x)` := 頂点 $x$ の属するグループのrootを取得する.
- `unite(x, y)` := 頂点 $x$ と頂点 $y$ を同じグループにまとめる.
- `same(x, y)` := 頂点 $x$ と頂点 $y$ が同じグループに属しているかを判定する.
- `size(x)` := 頂点 $x$ の属するグループの大きさを求める.
