
#include "bits/stdc++.h"
using namespace std;

// #define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  // array<int, 10000> A;
  // string S;
  // string T;

  cin >> N;
  for (int i = 1; i <= N; i += 2) {
    int tmp = 0;
    for (int j = 1; j <= i; ++j) {
      if (i % j == 0) ++tmp;
    }
    if (tmp == 8) ++num;
  }

  cout << num << endl;
  
  return 0;
}
