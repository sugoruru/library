// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/matrix_product
#include "../../../libs/other/template.hpp"
#include "../../../libs/math/linearAlgebra/matrixProduct.hpp"

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int mod = 998244353;
  Matrix<ll> A(n, vector(m, 0ll)), B(m, vector(k, 0ll));
  rep(i, n) rep(j, m) cin >> A[i][j];
  rep(i, m) rep(j, k) cin >> B[i][j];
  auto C = matrixProduct(A, B, mod);
  for (auto& row : C) {
    for (auto& val : row) {
      cout << val << " ";
    }
    cout << endl;
  }
  return 0;
}