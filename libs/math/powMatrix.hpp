#pragma once
#include "./matrixProduct.hpp"

template <typename T>
Matrix<T> powMatrix(const Matrix<T>& A, int64_t n, int mod = -1) {
  if (n == 0) {
    Matrix<T> I(A.size(), vector<T>(A.size(), 0));
    rep(i, A.size()) I[i][i] = 1;
    return I;
  }
  if (n % 2 == 0) {
    Matrix<T> half = powMatrix(A, n / 2, mod);
    return matrixProduct(half, half, mod);
  } else {
    return matrixProduct(A, powMatrix(A, n - 1, mod), mod);
  }
}