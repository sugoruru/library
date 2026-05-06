---
title: CycleDetectorDirected
documentation_of: ../../libs/graph/cycleDetectorDirected.hpp
---

## 概要

有向グラフにおける閉路検出を行うクラス.

## コンストラクタ

```
(1) CycleDetectorDirected()
```

## 使い方

- `find_cycle(G, isVertex)` : グラフ `G` に閉路が存在するかを判定し、存在する場合はその閉路を返す. `isVertex` は サイクルの返り値において頂点版か辺版かを表すブール値で、デフォルトは `true` である.

## 計算量

- `find_cycle` : $O(V + E)$
