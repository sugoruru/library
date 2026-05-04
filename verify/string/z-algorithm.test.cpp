// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/zalgorithm
#include "../../libs/other/template.hpp"
#include "../../libs/string/z-algorithm.hpp"

int main() {
  string s;
  cin >> s;
  auto z = z_algorithm(s);
  for (auto x : z) cout << x << " ";
  cout << endl;
  return 0;
}