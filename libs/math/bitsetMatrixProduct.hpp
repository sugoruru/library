#pragma once

template <typename T>
using Matrix = vector<vector<T>>;

template <typename T>
Matrix<T> bitsetMatrixProduct(Matrix<T>& A, Matrix<T>& B) {
  const int MAX = 4096;
  int n = A.size(), m = B[0].size(), p = A[0].size();
  assert(p == B.size());
  static bitset<MAX> a[MAX], bt[MAX];
  rep(i, n) rep(k, p) if (A[i][k] & 1) a[i].set(k);
  rep(j, m) rep(k, p) if (B[k][j] & 1) bt[j].set(k);
  Matrix<T> C(n, vector<T>(m));
  rep(i, n) rep(j, m) C[i][j] = (a[i] & bt[j]).count() & 1;
  return C;
}