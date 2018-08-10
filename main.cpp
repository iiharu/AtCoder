
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  // array<int, 10000> A;
  // string S;
  // string T;

  cin >> N;

  vector<pair<int, int>> Q;

  while (true) {

    if ((int)Q.size() == N) {
      bool isQueen = true;

      for (auto it0 = Q.begin(); it0 < Q.end(); ++it0) {
        pair<int, int> p = *it0;
        for (auto it1 = it0 + 1; it1 < Q.end(); ++it1) {
          pair<int, int> q = *it1;
          if (p.first == q.first) isQueen = false;
          if (p.second == q.second) isQueen = false;
          if (abs(p.first - q.first) == abs(p.second - q.second)) isQueen = false;
          if (!isQueen) break;
        }
        if (!isQueen) break;
      }

      if (isQueen) {
        for (pair<int, int> p : Q) cout << "(" << p.first << ", " << p.second << ")" << " ";
        cout << endl;
      }
    }

    if ((int) Q.size() == N) {
      bool isEnd = true;
      for (auto it = Q.begin(); it < Q.end(); ++it) if ((*it).second != N) isEnd = false;
      if (isEnd) break;
    }

    if ((int) Q.size() < N) Q.push_back(make_pair(Q.size() + 1, 1));
    else {
      while (true) {
        pair<int, int> &p = Q.back();
        Q.pop_back();

        if (p.second < N) {
          p.second = p.second + 1;
          Q.push_back(p);
          break;
        }
      }
    }
  }
    
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   cin >> *it;

  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   if (*it % 2 == 0) ++num;
  
  // cout << num << endl;
  
  return 0;
}
