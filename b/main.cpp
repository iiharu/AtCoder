
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

// #define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void)
{
  int a, b; cin >> a >> b;

  int num = 0;
  int sum = 0;
  vector<int> v = {1};
  sum = 1;

  if (sum >= b) {
    
  }

  while (sum < b) {
    if (v.size() != a) {
      while (v.size() != a) v.push_back(1);
      sum = a;
      num = 1;
    } else {
      int n = v.back();
      v.pop_back();
      v.push_back(n - 1 + a);
      sum += a - 1;
      num += 1;
    }
    
  }
  cout << num << endl;
  
}
