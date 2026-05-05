// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B
#include "../../libs/other/template.hpp"
#include "../../libs/graph/topological_sort.hpp"

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> G(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }
  auto res = topological_sort(G);
  for (int v : res) cout << v << endl;
  return 0;
}