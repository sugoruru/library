#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif
struct Init {
  Init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(15);
  }
} init;
template <typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& pair_var) {
  os << "(" << pair_var.first << ", " << pair_var.second << ")";
  return os;
}
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& vec) {
  os << "[";
  rep(i, vec.size()) {
    os << vec[i];
    if (i != vec.size() - 1) os << ", ";
  }
  os << "]";
  return os;
}
template <typename T>
ostream& operator<<(ostream& os, const vector<vector<T>>& vec) {
  os << "[";
  rep(i, vec.size()) {
    os << vec[i];
    if (i != vec.size() - 1) os << ", ";
  }
  os << "]";
  return os;
}