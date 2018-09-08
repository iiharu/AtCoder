
#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  // array<int, 1000000> A;;
  // string S;
  // string T;

  array<string, 100> W;
  bool flag = true;

  cin >> N;

  for (int i = 0; i < N; ++i) {
    cin >> W[i];
  }

  for (int i = 0; i < N; ++i) {

    if (i > 0) {
      if (W[i-1][W[i-1].length() - 1] != W[i][0]) {
        flag = false;
        break;
      }
    }

    for (int j = 0; j < i; ++j) {
      if (W[j] == W[i]) {
        flag = false;
        break;
      }
    }
  }

  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}
