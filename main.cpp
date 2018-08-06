
#include "bits/stdc++.h"
using namespace std;

#define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  array<int, 10000> A;
  // string S;
  // string T;

  cin >> N;
  for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  for (auto it = A.begin(); it < A.begin() + N; ++it)
    cout << it - A.begin() << " :" << *it << endl;
  
  cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
