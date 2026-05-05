// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/enumerate_palindromes
#include "../../libs/other/template.hpp"
#include "../../libs/string/manacher.hpp"

int main() {
  string s;
  cin >> s;
  auto res = manacher(s, true);
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  cout << endl;
  return 0;
}