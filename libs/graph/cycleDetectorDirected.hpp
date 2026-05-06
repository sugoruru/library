#pragma once

struct CycleDetectorDirected {
  using Graph = vector<vector<pair<int, int>>>;
  vector<int> find_cycle(const Graph& G, bool isVertex = true) {
    vector<int> vis(G.size()), pv(G.size(), -1), pe(G.size(), -1), res;
    auto dfs = [&](auto&& self, int v) -> bool {
      vis[v] = 1;
      for (auto [u, id] : G[v]) {
        if (!vis[u]) {
          pv[u] = v, pe[u] = id;
          if (self(self, u)) return true;
        } else if (vis[u] == 1) {
          if (isVertex) {
            res = {u};
            for (int x = v; x != u; x = pv[x]) res.push_back(x);
          } else {
            res = {id};
            for (int x = v; x != u; x = pv[x]) res.push_back(pe[x]);
          }
          reverse(res.begin(), res.end());
          return true;
        }
      }
      vis[v] = 2;
      return false;
    };
    for (int i = 0; i < G.size(); i++)
      if (!vis[i] && dfs(dfs, i)) return res;
    return {};
  }
};
