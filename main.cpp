
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
  // array<int, 100000> A;;
  // string S;
  // string T;
  int T, A;
  array<double, 1000> H;

  cin >> N;
  cin >> T>>A;

  for (int i = 0; i < N; ++i) {
    int h;
    cin >> h;
    H[i] = abs(A - T + h * 0.006);
  }

  num = 0;
  for (int i = 1; i < N; ++i) {
    if (H[i] < H[num]) num = i;
    
  }

  cout << num + 1 << endl;

  return 0;
}
