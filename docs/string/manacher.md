---
title: Manacher's algorithm
documentation_of: ../../libs/string/manacher.hpp
---

## 概要

Manacher's algorithm は、文字列中の回文を効率的に列挙するためのアルゴリズムです.  
文字列の各位置を中心とする回文の最大半径を $O(\lvert s \rvert)$ で求めることができます.

## 使い方

- `manacher(s, even)` :=
  - even = false のとき、s の各位置を中心とする回文の最大半径を求める.
  - even = true のとき、s の各位置の間も含めて中心とする回文の最大半径を求める.

## 計算量

- `manacher(s, even)` : $O(\lvert s \rvert)$
