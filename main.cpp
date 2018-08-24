
#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  int M;
  // array<int, 10000> A;
  // string S;
  // string T;

  int H, W;
  array<string, 50> S;
  array<string, 50> T;
  
  cin >> H >> W;

  for (int i = 0; i < H; ++i) {
    cin >> S[i];
  }

  for (int x = 0; x < H; ++x) {
    T[x] = "";
    for (int y = 0; y < W; ++y) {
      if (S[x][y] == '#') T[x] = T[x] + '#';
      else {
        int tmp = 0;
        for (int i = x - 1; i <= x + 1; ++i) {
          for (int j = y - 1; j <= y + 1; ++j) {
            if (i < 0 || H <= i) continue;
            if (j < 0 || W <= j) continue;
            if (S[i][j] == '#') ++tmp;
          }
        }
        T[x]= T[x] + to_string(tmp);
      }
    }
  }

  for (int i = 0; i < H; ++i) {
    cout << T[i] << endl;
  }
  
  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   cin >> *it;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   if (*it % 2 == 0) ++num;
  // cout << num << endl;
  
  return 0;
}
