// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/cycle_detection
#include "../../libs/other/template.hpp"
#include "../../libs/graph/cycleDetectorDirected.hpp"

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, int>>> G(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    G[a].push_back({b, i});
  }
  CycleDetectorDirected cd;
  auto cycle = cd.find_cycle(G, false);
  if (cycle.empty()) {
    cout << -1 << endl;
  } else {
    cout << cycle.size() << endl;
    rep(i, cycle.size()) cout << cycle[i] << endl;
  }
  return 0;
}
