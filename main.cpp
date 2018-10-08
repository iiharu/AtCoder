
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
  array<int, 100000> A;
  // string S;
  // string T;

  cin >> N;

  if (N == 1) {
    cout << "Hello World" << endl;
  } else {
    int a, b;
    cin >> a;
    cin >> b;
    cout << a + b << endl;
  }
  
  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  // for (auto it = A.begin(); it < A.begin() + N; ++it) if (*it % 2 == 0) ++num;

  // cout << num << endl;;
  
  return 0;
}
