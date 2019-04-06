
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

// clang-format off
template <typename T> T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }
template <typename T> T lcm(T a, T b) { return a * b / gcd(a, b); }
template <typename T> T clamp(T val, T min, T max) { return val < min ? min : (max < val ? max : val); }
template <typename T> size_t max_index(T begin, T end) { return distance(begin, max_element(begin, end)); }
template <typename T> size_t min_index(T begin, T end) { return distance(begin, min_element(begin, end)); }
// clang-format on

#define int long long
#define YES "Yes"
#define NO  "No"

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  // int num = 0;

  int x, y, z, k;
  cin >> x >> y >> z >> k;
  vector<int> a(x);
  vector<int> b(y);
  vector<int> c(z);

  for (int i = 0; i < x; ++i) cin >> a[i];
  for (int i = 0; i < y; ++i) cin >> b[i];
  for (int i = 0; i < z; ++i) cin >> c[i];

  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end(), greater<int>());
  sort(c.begin(), c.end(), greater<int>());


  vector<int> e(x * y);
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < y; ++j) {
      e[i * y + j] = a[i] + b[j];
    }
  }

  sort(e.begin(), e.end(), greater<int>());

  vector<int> g(k * z);
  for (int i = 0; i < min(x * y, k); ++i) {
    for (int j = 0; j < z; ++j) {
      g[i * z + j] = e[i] + c[j];
    }
  }

  sort(g.begin(), g.end(), greater<int>());

  for (int i = 0; i < k; ++i) cout << g[i] << endl;
  
  // cout << num << endl;
  
  return 0;
}
