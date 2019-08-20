
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <iostream>
#include <deque>
#include <functional>
#include <iterator>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <string>
#include <vector>

using namespace std;

// #define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void)
{
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  double ans = 0.;
  for (int i = 0; i < n; ++i) {
    ans += 1. / static_cast<double>(a[i]);
  }
  ans = 1. / ans;
  cout << ans << endl;
}
