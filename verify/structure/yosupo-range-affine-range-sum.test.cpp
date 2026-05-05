// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/range_affine_range_sum
#include "../../libs/other/template.hpp"
#include "../../libs/structure/lazySegmentTree.hpp"

int mod = 998244353;
struct S {
  ll sz, val;
};
struct F {
  ll b, c;
};
S op(S a, S b) { return S({a.sz + b.sz, (a.val + b.val) % mod}); }
S e() { return S({0, 0}); }
S mapping(F f, S x) { return S({x.sz, (x.sz * f.c + f.b * x.val) % mod}); }
F composition(F f, F g) {
  return F({(f.b * g.b) % mod, (f.b * g.c + f.c) % mod});
}
F id() { return F({1, 0}); }

int main() {
  int n, q;
  cin >> n >> q;
  vector<S> v(n, e());
  rep(i, n) v[i].sz = 1;
  rep(i, n) cin >> v[i].val;
  LazySegTree<S, F, op, e, mapping, composition, id> seg(v);
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 0) {
      ll l, r, b, c;
      cin >> l >> r >> b >> c;
      seg.apply(l, r, F({b, c}));
    } else {
      ll l, r;
      cin >> l >> r;
      cout << seg.prod(l, r).val << "\n";
    }
  }
  return 0;
}
