
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
  array<int, 100000> A;;
  // string S;
  // string T;

  int X, Y;

  cin >> N >> M >> X >> Y;

  int XM, Ym;

  for (int i = 0; i < N; ++i) {
    int x;
    cin >> x;
    if (i == 0) XM = x;
    else XM = max(XM, x);
  }

  for (int j = 0; j < M; j++) {
    int y;
    cin >> y;
    if (j == 0) Ym = y;
    else Ym = min(Ym, y);
  }

  bool flag = false;
  if (XM <= Ym) {
    for (int i = XM + 1; i <= Ym; ++i) {
      if (i > Ym) break;
      if (X < i && i <= Y) flag = true;
    }
  }

  if (flag) cout << "No War" << endl;
  else cout << "War" << endl;

  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  // for (auto it = A.begin(); it < A.begin() + N; ++it) if (*it % 2 == 0) ++num;

  // cout << num << endl;
  
  return 0;
}
