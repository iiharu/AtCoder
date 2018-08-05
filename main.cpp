
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  // int num; // num
  // num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  double num;
  num = numeric_limits<double>::min();
  int N;
  int M;
  // array<int, 10000> A;
  // string S;
  // string T;
  
  cin >> N >> M;

  for (int i = 0; i <= N; ++i) {
    for (int j = 0; i + j <= N; ++j) {
      int k = N - i - j;

      if (M == i * 10000 + j * 5000 + k * 1000) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
      
    }
  }

  cout << "-1 -1 -1" << endl;
  // cout << num << endl;
  return 0;
}
