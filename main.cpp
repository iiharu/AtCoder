
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  int M;
  array<int, 10000> A;
  // string S;
  // string T;

  cin >> N >> M;

  if (N % M == 0) cout << 0 << endl;
  else cout << 1 << endl;
  
  return 0;
}
