#pragma once

// @title 2次元累積和
template <typename T>
struct CumulativeSum2D {
  vector<vector<T>> data;
  CumulativeSum2D(const vector<vector<T>>& source) {
    int h = source.size(), w = source[0].size();
    data.resize(h + 1, vector<T>(w + 1, 0));
    for (int i = 0; i < h; i++)
      for (int j = 0; j < w; j++)
        data[i + 1][j + 1] = source[i][j];
    for (int i = 0; i < h + 1; i++)
      for (int j = 0; j < w; j++)
        data[i][j + 1] += data[i][j];
    for (int i = 0; i < h; i++)
      for (int j = 0; j < w + 1; j++)
        data[i + 1][j] += data[i][j];
  }
  T query(T a, T b, T c, T d) {
    return data[c][d] - data[a][d] - data[c][b] + data[a][b];
  }
};