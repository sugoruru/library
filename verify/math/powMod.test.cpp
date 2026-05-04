// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
#include "../../libs/other/template.hpp"
#include "../../libs/math/powMod.hpp"

int main() {
  ll a, b, m;
  cin >> a >> b >> m;
  cout << powMod(a, b, m) << endl;
  return 0;
}