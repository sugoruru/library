// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
#include "../../libs/other/template.hpp"
#include "../../libs/math/isPrime.hpp"

int main() {
  int t;
  cin >> t;
  int ans = 0;
  while (t--) {
    int n;
    cin >> n;
    if (isPrime(n)) ans++;
  }
  cout << ans << endl;
}