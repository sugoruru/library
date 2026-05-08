// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D
#include "../../libs/other/template.hpp"
#include "../../libs/algorithm/inversion_number.hpp"

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  cout << inversion_number(a, true) << endl;
  return 0;
}
