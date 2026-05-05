// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0009
#include "../../libs/other/template.hpp"
#include "../../libs/math/primeList.hpp"

int main() {
  int n;
  auto primes = primeList(1000000);
  while (cin >> n) {
    auto it = upper_bound(all(primes), n);
    cout << (it - primes.begin()) << endl;
  }
}