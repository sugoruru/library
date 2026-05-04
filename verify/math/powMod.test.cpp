// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
#include "../../libs/other/template.hpp"
#include "../../libs/math/powMod.hpp"

int main() {
  ll mod = 1e9 + 7;
  ll a, b;
  cin >> a >> b;
  cout << powMod(a, b, mod) << endl;
  return 0;
}