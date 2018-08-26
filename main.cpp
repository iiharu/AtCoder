
#include "bits/stdc++.h"
using namespace std;

// #define int long long

signed main(void) {
  int num; // num
  // num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  num = numeric_limits<int>::max(); // min
  int N;
  int M;
  array<int, 1000000> A;
  // string S;
  // string T;

  cin >> N >> M;
  for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  for (int i = 0; i < N - M + 1; ++i) {
    int tmp = min(abs(A[i]) + abs(A[i] - A[i + M - 1]),
                  abs(A[i + M - 1]) + abs(A[i] - A[i + M - 1]));
    num = min(num, tmp);
  }
  cout << num << endl;
  
  return 0;
}
