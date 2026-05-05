---
title: 素数テーブル
documentation_of: ../../libs/math/primeTable.hpp
---

## 概要

エラトステネスの篩を用いて、$n$ 以下の正整数について、素数かどうかを判定するテーブルを構築.

## 使い方

- `primeTable(n)` := $n$ 以下の正整数について、素数かどうかを判定するテーブルを返す.

## 計算量

- `primeTable(n)` : $O(n \log \log n)$
