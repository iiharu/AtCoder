
#include "bits/stdc++.h"
using namespace std;

#define int long long

int gcd(int a, int b) {
  if (b == 0) return a;
  else if (a < b) return gcd(b, a);
  else return gcd(b, a % b);
}


signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  array<int, 100000> A;;
  // string S;
  // string T;

  int X;
  
  cin >> N >> X;
  for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  for (auto it = A.begin(); it < A.begin() + N; ++it) *it = abs(X - *it);
  
  sort(A.begin(), A.begin() + N);

  for (auto it = A.begin(); it < A.begin() + N; ++it) {
    if (it == A.begin()) num = *it;
    else num = gcd(num, *it);
  }

  cout << num << endl;
  
  return 0;
}
