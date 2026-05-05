#pragma once

template <typename T>
using Matrix = vector<vector<T>>;

template <typename T>
Matrix<T> matrixProduct(const Matrix<T>& A, const Matrix<T>& B, int mod = -1) {
  int n = A.size(), m = B[0].size(), p = A[0].size();
  assert(p == B.size());
  Matrix<T> C(n, vector<T>(m));
  rep(i, n) rep(k, p) rep(j, m) {
    C[i][j] += A[i][k] * B[k][j];
    if (mod != -1) C[i][j] %= mod;
  }
  return C;
}
