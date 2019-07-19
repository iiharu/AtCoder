
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
  vector<int> a(n);
  vector<int> x(n);
  int sum = 0;
  x[0] = sum;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    sum += a[i];
    if (i % 2 == 1) {
      x[0] -= 2 * a[i];
    }
  }

  x[0] += sum;

  for (int i = 0; i < n; ++i) {
    if (i != 0) {
      x[i] = 2 * a[i - 1] - x[i - 1];
    }
    cout << x[i];
    cout << " ";
  }

}
