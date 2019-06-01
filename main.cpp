
#include <bits/stdc++.h>
using namespace std;

// #define int long long
struct Fast { Fast(){ std::cin.tie(0); std::cout.tie(0); ios::sync_with_stdio(false); }} fast;

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void) {
  
  int n; cin >> n;
  vector<int> a(n);
  for (auto it = a.begin(); it != a.end(); ++it) cin >> *it;
  
  cout << accumulate(a.cbegin(), a.cend(), 0) << endl;

  return 0;
}
