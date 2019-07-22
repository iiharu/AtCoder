
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
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  vector<int> b(n);
  vector<int> c(n);
  b[0] = a[0];
  c[n - 1] = a[n - 1];
  
  for (int i = 1; i < n; ++i) {
    b[i] = max(a[i], b[i - 1]);
    c[n - 1 - i] = max(a[n - 1 - i], c[n - i]);
  }

  for (int i = 0; i < n; ++i) {
    if (i == 0) {
      cout << c[i + 1] << endl;
    } else if (i == n - 1) {
      cout << b[i - 1] << endl;
    } else {
      cout << max(b[i - 1], c[i + 1]) << endl;
    }
  }
  
}
