
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

template <typename T>
T gcd(T m, T n)
{
  return n == 0 ? m : gcd(n, m % n);
}
template <typename T>
T lcm(T m, T n) { return n * m / gcd(n, m); }

const int MOD = 1e9 + 7;

signed main(void)
{
  int num;

  int n;
  string s;
  cin >> s;
  n = s.length();

  num = 2 * (n - 1);
  for (int i = 1; i < n - 1; ++i)
  {
    if (s[i] == 'U')
    {
      num += n - (i + 1);
      num += 2 * i;
    }
    else
    { // s[j] == 'D'
      num += i;
      num += 2 * (n - (i + 1));
    }
  }

  cout << num << endl;
}
