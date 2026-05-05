// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E
#include "../../libs/other/template.hpp"
#include "../../libs/math/extGCD.hpp"

int main() {
  ll a, b;
  cin >> a >> b;
  auto [x, y] = extgcd(a, b);
  cout << x << " " << y << endl;
  return 0;
}