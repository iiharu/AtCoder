
#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

template <typename T> T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }
template <typename T> T lcm(T a, T b) { return a * b / gcd(a, b); }
template <typename T> T clamp(T val, T min, T max) { return val < min ? min : (max < val ? max : val); }

#define int long long
#define all(a) (a).begin(),(a).end()
#define rep(i,n) for (int i=0;i<(n);++i)
#define forit(beginIt, endIt) for(auto it=(beginIt);it!=(endIt);++it)

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int num = 0;
  int n;
  cin >> n;
  vector<int> v(n);
  forit (v.begin(), v.end()) cin >> *it;
  for (auto it = v.begin(); it < v.end(); ++it) num += *it;
  cout << num << endl;

  return 0;
}
