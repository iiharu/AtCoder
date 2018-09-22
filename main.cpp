
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
  int M;
  // array<int, 100000> A;
  // string S;
  // string T;
  int A, B, C;
  // array<int, 100> O;
  array<int, 100> L;
  array<int, 100> R;
  array<bool, 100> flag;

  for (int i = 0; i < 100; ++i) flag[i] = false;
  
  cin >> N >> M >> A >> B;

  for (int i = 0; i < M; i++) {
    int l, r;
    cin >> l >> r;
    for (int j = l - 1; j <= r - 1; ++j) flag[j] = true;
  }

  C = max(A, B);
  for (int i = 0; i < N; ++i) {
    if (flag[i]) num += A;
    else num += C;
  }

  
  cout << num << endl;
  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  // for (auto it = A.begin(); it < A.begin() + N; ++it) if (*it % 2 == 0) ++num;

  // cout << num << endl;
  
  return 0;
}
