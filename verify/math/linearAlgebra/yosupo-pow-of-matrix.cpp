// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/pow_of_matrix
#include "../../../libs/other/template.hpp"
#include "../../../libs/math/linearAlgebra/powMatrix.hpp"

int main() {
  int mod = 998244353;
  ll n, k;
  cin >> n >> k;
  Matrix<ll> A(n, vector<ll>(n));
  rep(i, n) rep(j, n) cin >> A[i][j];
  Matrix<ll> ans = powMatrix(A, k, mod);
  rep(i, n) {
    rep(j, n) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}