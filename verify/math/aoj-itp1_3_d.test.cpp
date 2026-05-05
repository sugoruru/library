// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D
#include "../../libs/other/template.hpp"
#include "../../libs/math/divisor.hpp"

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  auto div = divisor(c);
  ll ans = 0;
  for (int i = a; i <= b; i++) {
    if (count(all(div), i) > 0) ans++;
  }
  cout << ans << endl;
  return 0;
}