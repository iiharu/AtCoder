
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
  int N, T; cin >> N >> T;
  vector<int> t(N);
  // for (int i = 0; i < N; ++i) {
  //   cin >> t[i];
  // }
  num = 0;
  for (int i = 0; i < N; ++i) {
    cin >> t[i];
    if (i != 0) {
      int d = t[i] - t[i - 1];
      if (d <= T) num += d;
      else num += T;
    }
  }
  num += T;
  // num = 0;
  // for (int i = 0; i < N; ++i) {
  //   if (i == N - 1) {
  //     num += T;
  //   } else {
  //     int d = t[i + 1] - t[i];
  //     if (d <= T) num += d;
  //     else num += T;
  //   }
  // }
  cout << num << endl;
}
