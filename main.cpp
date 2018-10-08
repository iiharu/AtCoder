
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
  num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  array<int, 100000> A;
  // string S;
  // string T;
  int T;


  cin >> N >> T;
  for (int i = 0; i < N; ++i) {
    int c, t;
    cin >> c >> t;
    if (t <= T) {
      num = min(num, c);
    }
  }

  if (num == numeric_limits<int>::max()) {
    cout << "TLE" << endl;
  } else {
    cout << num << endl;
    
  }

  return 0;
}
