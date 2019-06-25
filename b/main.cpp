
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

  int n; cin >> n;
  int l; cin >> l;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) a[i] = l + i;

  int sum = accumulate(a.begin(), a.end(), 0);
  if (l <= 0 && 0 <= l + n - 1) {
    cout << sum;
  } else if (l > 0) {
    cout << sum - a[0];
  } else { // L + N - 1 < 0
    cout << sum - a[n - 1];
  }
  cout << endl;
  
}
