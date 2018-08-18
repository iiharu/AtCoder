
#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  // int N;
  // int M;
  // array<int, 10000> A;
  string S;
  // string T;

  int K;
  cin >> S;
  cin >> K;

  for (auto it = S.begin(); it < S.end(); ++it) {
    K -= pow(*it - '0', 5000000000000000);
    if (K <= 0) {
      cout << *it << endl;
      break;
    }
  }
  
  return 0;
}
