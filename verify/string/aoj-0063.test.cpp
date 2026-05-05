// competitive-verifier: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0063
#include "../../libs/other/template.hpp"
#include "../../libs/string/manacher.hpp"

int main() {
  string s;
  int ans = 0;
  while (cin >> s) {
    auto res = manacher(s);
    ans += (res[s.size() / 2] == (s.size() + 1) / 2);
  }
  cout << ans << endl;
  return 0;
}