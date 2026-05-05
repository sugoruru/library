#pragma once

vector<int> manacher(string s, bool even = false) {
  if (even) {
    string t = "#";
    for (char c : s) t += c, t += '#';
    s = t;
  }
  int n = s.size(), i = 0, j = 0;
  vector<int> res(n);
  while (i < n) {
    while (i - j >= 0 && i + j < n && s[i - j] == s[i + j]) j++;
    res[i] = j;
    int k = 1;
    while (i - k >= 0 && i + k < n && k + res[i - k] < j) {
      res[i + k] = res[i - k];
      ++k;
    }
    i += k, j -= k;
  }
  if (even) {
    res = vector<int>(res.begin() + 1, res.end() - 1);
    for (int& x : res) x -= 1;
  }
  return res;
}