
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
struct Fast
{
  Fast()
  {
    std::cin.tie(0);
    std::cout.tie(0);
    ios::sync_with_stdio(false);
  }
} fast;

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void)
{

  int W, H, x, y; cin >> W >> H >> x >> y;
  cout << W * H / 2. << " ";
  if (2 * x == W && 2 * y == H) cout << 1 << endl;
  else cout << 0 << endl;

}
