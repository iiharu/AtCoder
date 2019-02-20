
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

  int n; cin >> n;
  vector<int> h(n);
  for (auto it = h.begin(); it < h.end(); ++it) cin >> *it;

  for (int i = 0; i <= 100; ++i) {

    bool is_watering = false;
    for (auto it = h.begin(); it < h.end(); ++it){
      if (is_watering) {
        if (*it <= i || it == h.end() - 1) {
          is_watering = false;
          ++num;
        }
      } else {
        if (*it > i) {
          if (it == h.end() - 1) {
            ++num;
          } else {
            is_watering = true;
          }
        }
      }
    }
    
  }
  
  // int num = 0;
  // int c; cin >> n;
  // vector<int> v(n);
  // for (auto it = v.begin(); it < v.end(); ++it) cin >> *it;
  // for (auto it = v.begin(); it < v.end(); ++it) num += *it;
  // cout << num << endl;
  
  cout << num << endl;
  return 0;
}
