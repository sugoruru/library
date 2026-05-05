// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/point_add_range_sum
#include "../../libs/other/template.hpp"
#include "../../libs/structure/segmentTree.hpp"

ll op(ll a, ll b) { return a + b; }
ll e() { return 0LL; }

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  SegTree<ll, op, e> seg(A);
  rep(i, Q) {
    int t;
    cin >> t;
    if (t == 0) {
      ll p, x;
      cin >> p >> x;
      seg.set(p, x);
    } else {
      int l, r;
      cin >> l >> r;
      cout << seg.prod(l, r) << endl;
    }
  }
  return 0;
}