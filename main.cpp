
#include <bits/stdc++.h>
using namespace std;

#define int long long
struct Fast { Fast(){ std::cin.tie(0); std::cout.tie(0); ios::sync_with_stdio(false); }} fast;

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void) {
  
  int n; cin >> n;
  int k; cin >> k;
  vector<pair<int, int>> p(n);
  for (auto it = p.begin(); it != p.end(); ++it) {
    *it = make_pair(0, 0);
    cin >> (*it).first >> (*it).second;
  }
  sort(p.begin(), p.end());
  
  int m = 0;
  for (auto it = p.begin(); it != p.end(); ++it) {
    m += (*it).second;
    if (m >= k) {
      cout << (*it).first << endl;
      break;
    }
  }

}
