// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/unionfind
#if 1
#include "libs/other/template.hpp"
#endif
#include "libs/datastructure/UnionFind.hpp"

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