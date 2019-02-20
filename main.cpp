
#include <algorithm>
#include <bitset>
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

// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define all(a) (a).begin(),(a).end()
// #define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());

template <typename T> T clamp(T val, T min, T max) { return val < min ? min : (max < val ? max : val); }
template <typename T> T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }
template <typename T> T lcm(T a, T b) { return a * b / gcd(a, b); }

#define int long long
#define SIZE 100000

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min

  cout << gcd(1071, 1029) << endl;
  cout << gcd(1029, 1071) << endl;
  cout << lcm(30, 42) << endl;
  
  // array<int, SIZE> a;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) cin >> *it;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) num += *it;

  cout << num << endl;
  return 0;
}
