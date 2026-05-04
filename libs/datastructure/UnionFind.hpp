// @title Union-Find
struct UnionFind {
  vector<int> parent;
  vector<int> parentSize;
  UnionFind(int N) {
    for (int i = 0; i < N; i++) {
      parent.push_back(i);
      parentSize.push_back(1);
    }
  }
  int root(int x) {
    if (parent[x] == x) return x;
    parent[x] = root(parent[x]);
    return parent[x];
  }
  bool unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return false;
    if (parentSize[x] > parentSize[y]) swap(x, y);
    parent[x] = y;
    parentSize[y] += parentSize[x];
    return true;
  }
  bool same(int x, int y) { return root(x) == root(y); }
  int size(int x) { return parentSize[root(x)]; }
};
