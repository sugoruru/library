// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
#include "../../libs/other/template.hpp"
#include "../../libs/math/factorize.hpp"

int main() {
  int n;
  cin >> n;
  auto res = prime_factorize(n);
  cout << n << ":";
  for (auto [p, e] : res) {
    rep(i, e) cout << " " << p;
  }
  cout << endl;
}