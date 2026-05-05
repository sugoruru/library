#pragma once

vector<int> topological_sort(const vector<vector<int>>& G) {
  vector<int> res;
  vector<bool> used(G.size(), false);
  auto dfs = [&](auto&& self, int v) -> void {
    used[v] = true;
    for (int u : G[v])
      if (!used[u]) self(self, u);
    res.push_back(v);
  };
  for (int v = 0; v < G.size(); v++)
    if (!used[v]) dfs(dfs, v);
  reverse(res.begin(), res.end());
  return res;
}