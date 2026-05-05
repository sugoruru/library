// competitive-verifier: PROBLEM https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0560
#include "../../libs/other/template.hpp"
#include "../../libs/algorithm/cumulativeSum2D.hpp"

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int>> J(n, vector<int>(m)), O(n, vector<int>(m)), I(n, vector<int>(m));
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, m) {
      if (s[j] == 'J') J[i][j] = 1;
      if (s[j] == 'O') O[i][j] = 1;
      if (s[j] == 'I') I[i][j] = 1;
    }
  }
  CumulativeSum2D<int> cJ(J), cO(O), cI(I);
  rep(i, k) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--, b--;
    cout << cJ.query(a, b, c, d) << " " << cO.query(a, b, c, d) << " " << cI.query(a, b, c, d) << endl;
  }
}