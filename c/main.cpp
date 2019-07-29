
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

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }

signed main(void)
{
  int num;
  int n; cin >> n;
  vector<int> a(n + 1);
  for (int i = 0; i < n + 1; ++i) cin >> a[i];

  vector<int> b(n);
  for (int i = 0; i < n; ++i) cin >> b[i];

  num = 0;

  for (int i = 0; i < n; ++i) {
    int m;

    for (int j = 0; j <= 1; ++j) {
      m = min(b[i], a[i + j]);
      a[i + j] -= m;
      b[i] -= m;
      num += m;
    }
  }
  
  cout << num << endl;
  
}
