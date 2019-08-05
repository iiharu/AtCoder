
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

signed main(void)
{
  int num = 0;
  int n; cin >> n;

  int i = 1;
  while(i <= n) {

    ++num;
    
    if (i == 9) {
      i = 100;
    } else if (i == 999) {
      i = 10000;
    } else if (i == 99999) {
      i = 1000000;
    } else {
      ++i;
    }
    

  }
    cout << num << endl;
  
}
