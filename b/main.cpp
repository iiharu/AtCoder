
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
#include <string>
#include <vector>

using namespace std;

#define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void)
{
  int n; cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; ++i) cin >> p[i];

  bool flag = false;
  flag = is_sorted(begin(p), end(p));
  
  for (int i = 0; i < n; ++i) {
    if (flag) break;
    for (int j = i + 1; j < n; ++j) {
      swap(p[i], p[j]);
      flag = is_sorted(begin(p), end(p));
      swap(p[i], p[j]);
      if (flag) break;
    }
    if (flag) break;
  }

  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;
  
}
