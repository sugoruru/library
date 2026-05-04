// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/unionfind
#include "libs/datastructure/UnionFind.hpp"

#include "libs/other/template.hpp"

int main() {
  int N, Q;
  cin >> N >> Q;
  UnionFind uf(N);
  rep(i, Q) {
    int t, u, v;
    cin >> t >> u >> v;
    if (t == 0) {
      uf.unite(u, v);
    } else {
      cout << uf.same(u, v) << endl;
    }
  }
  return 0;
}