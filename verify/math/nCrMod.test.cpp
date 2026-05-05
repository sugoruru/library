// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/binomial_coefficient_prime_mod
#include "../../libs/other/template.hpp"
#include "../../libs/math/nCrMod.hpp"

int main() {
  ll q, m;
  cin >> q >> m;
  NCR ncr(m, 10000030);
  rep(i, q) {
    ll n, k;
    cin >> n >> k;
    cout << ncr.nCr(n, k) << endl;
  }
  return 0;
}