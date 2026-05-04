#pragma once

// @title Union-Find
struct UnionFind {
  vector<int> pr, sz;
  UnionFind(int N) {
    rep(i, N) {
      pr.push_back(i);
      sz.push_back(1);
    }
  }
  int root(int x) {
    if (pr[x] == x) return x;
    pr[x] = root(pr[x]);
    return pr[x];
  }
  bool unite(int x, int y) {
    x = root(x), y = root(y);
    if (x == y) return false;
    if (sz[x] > sz[y]) swap(x, y);
    pr[x] = y;
    sz[y] += sz[x];
    return true;
  }
  bool same(int x, int y) { return root(x) == root(y); }
  int size(int x) { return sz[root(x)]; }
};
