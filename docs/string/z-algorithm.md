---
title: Z-algorithm
documentation_of: ../../libs/string/z-algorithm.hpp
---

## 概要

文字列 $s$ に対して、$z[i]$ を $s$ の接頭辞と $s[i..]$ の最長共通接頭辞の長さとする配列 $z$ を求めるアルゴリズム.

## 使い方

```
(1) vector<int> z_algorithm(string &s);
```

## 計算量

- `z_algorithm(s)` : $O(|s|)$
