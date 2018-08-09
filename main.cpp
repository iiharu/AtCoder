
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

int H;
int W;
array<array<char, 500>, 500> C;

bool search(int x, int y) {

  // cout << "(" << x << ", " << y << ")" << " :" << C[x][y] << endl;
  
  if (x < 0 || x >= H || y < 0 || y >= W) return false;
  
  switch (C[x][y]) {
  case 'g':
    return true;
  case '#': case '^':
    return false;
  }

  C[x][y] = '^'; // visited
  if (x < H) {
    int tmp = x + 1;
    if (search (tmp, y)) return true;
  }
  if (y < W) {
    int tmp = y + 1;
    if (search (x, tmp)) return true;
  }
  if (x > 0) {
    int tmp = x - 1;
    if (search (tmp, y)) return true;
  }
  if (y > 0) {
    int tmp = y - 1;
    if (search (x, tmp)) return true;
  }

  return false;
  
}

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  // int N;
  // int M;
  // array<int, 10000> A;
  // string S;
  // string T;

  int x, y;

  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; ++j) {
      cin >> C[i][j];
      if (C[i][j] == 's') {
        x = i;
        y = j;
      } 
    }
  }
  
  if(search(x, y)) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  // cout << num << endl;
  return 0;
}
