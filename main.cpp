
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
  array<int, 1000000> A;
  // string S;
  // string T;

  int K;

  cin >> N >> K;

  for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  sort(A.begin(), A.begin() + N, greater<int>());

  for (auto it = A.begin(); it < A.begin() + N; ++it) {
    if (K <= 0) break;
    K -= *it;
    ++num;
  }

  if (K > 0) num = -1;

  cout << num << endl;
  
  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   cin >> *it;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   if (*it % 2 == 0) ++num;
  // cout << num << endl;
  
  return 0;
}
