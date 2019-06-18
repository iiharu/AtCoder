
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
  int x; cin >> x;
  vector<int> l(n);
  for (int i = 0; i < n; ++i) {
    cin >> l[i];
  }

  num = 0;
  vector<int> d(n + 1);
  d[0] = 0;
  for (int i = 0; i < n + 1; ++i) {
    if (i > 0) {
      d[i] = d[i - 1] + l[i - 1];
    }
    if (d[i] <= x) {
      ++num;
    }
  }

  cout << num << endl;
}
