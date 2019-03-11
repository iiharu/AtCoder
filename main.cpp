
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

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n; cin >> n;

  cout << "1";
  for (int i = 1; i < n; ++i) {
    cout << "0";
  }
  cout << endl;

  // int num = 0;
  // int n;
  // cin >> n;
  // vector<int> v(n);
  // for (auto it = v.begin(); it < v.end(); ++it) cin >> *it;
  // for (auto it = v.begin(); it < v.end(); ++it) num += *it;
  // cout << num << endl;

  return 0;
}
