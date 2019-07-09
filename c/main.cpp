
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
  int M = 2019;
  int l, r;
  cin >> l >> r;

  int a = l % M;
  int b = r % M;

  num = 2018;
  if (l + M <= r) {
    num = 0;
  }
  else if (l + M > r) {
    if (a < b) {
      for (int i = a; i < b; ++i) {
        for (int j = a + 1; j <= b; ++j) {
          num = min(num, (i * j) % 2019);
        }
      }
    } else {
      for (int i = a; i != b; i = (i + 1) % 2019) {
        for (int j = (i + 1) % 2019; j != b + 1; j = (j + 1) % 2019) {
          num = min(num, (i * j) % 2019);
        }
      }
    }
  }
  cout << num << endl;
  
}
