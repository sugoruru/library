// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/point_add_range_sum
#include "../../libs/other/template.hpp"
#include "../../libs/structure/BIT.hpp"

int main() {
  int n, q;
  cin >> n >> q;
  BIT<ll> bit(n);
  rep(i, n) {
    int x;
    cin >> x;
    bit.add(i, x);
  }
  rep(_, q) {
    int t;
    cin >> t;
    if (t == 0) {
      int p, x;
      cin >> p >> x;
      bit.add(p, x);
    } else {
      int l, r;
      cin >> l >> r;
      cout << bit.sum(l, r) << endl;
    }
  }
  return 0;
}