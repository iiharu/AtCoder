
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
  int num = 0;
  int n; cin >> n;
  // vector<string> s(n);
  // string t;
  string s;
  map<string, int> mem;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    sort(begin(s), end(s));
    ++mem[s];
  }

  for (auto it = begin(mem); it != end(mem); ++it) {
    int val = (*it).second;
    if (val > 1) num += val * (val - 1) / 2;
  }

  cout << num << endl;
  
}
