
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
  int a, b, c, d; cin >> a >> b >> c >> d;

  if (c > d) {
    swap(c, d);
  }

  num = b - max(a - 1, 0ll);
  if (c == d) {
    num -= b / c;
    num += max(a - 1, 0ll) / c;
  } else if (lcm(c, d) == d) {
    num -= b / c;
    num += max(a - 1, 0ll) / c;
  } else {
    num -= b / c + b / d - b / lcm(c, d);
    num += max(a - 1, 0ll) / c + max(a - 1, 0ll) / d - max(a - 1, 0ll) / lcm(c, d);
  }

  cout << num << endl;
}
