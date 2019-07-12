
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
  for (int i = 0; i < n; ++i) cin >> a[i];

  deque<int> b;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0)
      b.push_back(a[i]);
    else
      b.push_front(a[i]);
  }

  if (n % 2 == 0) {
    for (auto it = b.cbegin(); it != b.cend(); ++it) {
      cout << *it << " ";
    }
  } else {
    for (auto it = b.crbegin(); it != b.crend(); ++it) {
      cout << *it << " ";
    }
  }
  
  cout << endl;
  
}
