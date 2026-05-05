// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/matrix_product_mod_2
#include "../../libs/other/template.hpp"
#include "../../libs/math/bitsetMatrixProduct.hpp"

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  Matrix<int> A(n, vector<int>(m)), B(m, vector<int>(k));
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, m) A[i][j] = s[j] - '0';
  }
  rep(i, m) {
    string s;
    cin >> s;
    rep(j, k) B[i][j] = s[j] - '0';
  }
  Matrix<int> C = bitsetMatrixProduct(A, B);
  rep(i, n) {
    rep(j, k) cout << C[i][j];
    cout << "\n";
  }
  return 0;
}