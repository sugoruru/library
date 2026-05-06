// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_A
#include "../../libs/other/template.hpp"
#include "../../libs/graph/cycleDetectorDirected.hpp"

int main() {
  int n, m;
  cin >> n >> m;
  CycleDetectorDirected::Graph G(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    G[a].emplace_back(b, i);
  }
  CycleDetectorDirected cd;
  auto cycle = cd.find_cycle(G);
  cout << (cycle.empty() ? 0 : 1) << endl;
  return 0;
}
