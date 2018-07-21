
#include <bits/stdc++.h>
using namespace std;

/* clang-format off */
// #define int long long
// #define double long double
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

template <typename T> inline size_t maxElement(T beginIt, T endIt) { return max_element(beginIt, endIt); }
template <typename T> inline size_t minElement(T beginIt, T endIt) { return min_element(beginIt, endIt); }
template <typename T> inline size_t maxIndex(T beginIt, T endIt) { return distance(beginIt, *max_element(beginIt, endIt)); }
template <typename T> inline size_t minIndex(T beginIt, T endIt) { return distance(beginIt, *min_element(beginIt, endIt)); }
template <typename T> inline int sum(T beginIt, T endIt) { return accumulate(beginIt, endIt, 0); }
template <typename T> inline int mean(T beginIt, T endIt) { return sum(beginIt, endIt) / distance(beginIt, endIt); }
template <typename T> inline void debug(T x) { cerr << x << " " << "(L:" << __LINE__ << ")" << endl; }
/* clang-format on */

signed main(void) {
  /* */
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  // double num; // num
  // num = 0; // count, result
  // num = numeric_limits<double>::min(); // max
  // num = numeric_limits<double>::max(); // min
  int N, M;
  array<int, 100000> A;
  string S, T;
  /* */

  cin >> S;
  cin >> T;
  for (int i = 0; i < S.length(); ++i) {
    if (S == T) {
      cout << "Yes" << endl;
      return 0;
    }
    S = S.back() + S.substr(0, S.length() - 1);
  }

  cout << "No" << endl;
  // cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
