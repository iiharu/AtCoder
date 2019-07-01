
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
  int num;
  int n; cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; ++i) cin >> d[i];
  sort(d.begin(), d.end());

  num = 0;
  for (int i = d.front(); i <= d.back(); ++i) {
    int dist = distance(d.cbegin(), lower_bound(d.cbegin(), d.cend(), i));
    if (n / 2 == dist) {
      ++num;
    } else if (n / 2 < dist) break;

  }

  cout << num << endl;
}
