
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

template <typename T>
T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T>
T lcm(T m, T n) { return n * m / gcd(n, m); }

void primeFactorize(int n, vector<int> &v)
{
  v = vector<int>(n + 1, 0);
  int a = 2;
  while (n >= a * a)
  {
    if (n % a == 0)
    {
      ++v[a];
      n /= a;
    }
    else
    {
      a++;
    }
  }
  v[n]++;
}

signed main(void)
{
  int num;

  int a, b;
  cin >> a >> b;

  num = 1;
  int n = min(sqrt(a), sqrt(b));
  for (int i = 2; i <= n; ++i)
  {
    int ca = 0;
    int cb = 0;
    while (a % i == 0)
    {
      a /= i;
      ++ca;
    }
    while (b % i == 0)
    {
      b /= i;
      ++cb;
    }
    if (ca > 0 && cb > 0)
    {
      ++num;
    }
  }

  if (a == b && a > n)
    ++num;
  cout << num << endl;
}
