
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

  array<int, 50> A;
  array<int, 50> B;

  cin >> N >> M;

  for (int i = 0; i < M; ++i) {
    cin >> A[i] >> B[i];
    A[i] -= 1;
    B[i] -= 1;
  }

  for (int i = 0; i < M; ++i) {
    array<bool, 50> visited;
    vector<int> stack;
    
    for (auto it = visited.begin(); it < visited.begin() + N; ++it) *it = false;
    stack.push_back(0);
    visited[0] = true;

    while(stack.size() > 0) {
      int v = stack.back();
      stack.pop_back();

      for (int j = 0; j < M; ++j) {
        if (i == j) continue;
        if (A[j] == v && !visited[B[j]]) {
          visited[B[j]] = true;
          stack.push_back(B[j]);
        }
        if (B[j] == v && !visited[A[j]]) {
          visited[A[j]] = true;
          stack.push_back(A[j]);
        }
      }
    }

    bool flag = true;
    for (auto it = visited.begin(); it < visited.begin() + N; ++it) if (!*it) flag &= false;
    if (!flag) ++num;
  }
  
  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   cin >> *it;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   if (*it % 2 == 0) ++num;
  cout << num << endl;
  
  return 0;
}
