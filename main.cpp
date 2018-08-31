
#include "bits/stdc++.h"
using namespace std;

// #define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  array<int, 1000000> A;
  // string S;
  // string T;

  int S;
  int T;

  // vector<int> N;
  deque<pair<int, int>> tree;
  
  cin >> N >> S >> T;

  num = -1;
  
  
  if (S == T) {
    num = 0;
  } else if (S > T) {
    num = -1;
  } else {
    tree.push_back(make_pair(0, S));
    int treeMax = pow(2, N);
    
    while (!tree.empty()) {
      pair<int, int> n = tree.front();
      tree.pop_front();
      if (n.second == T) {
        num = n.first;
        break;
      }
      if (n.second * 2 < treeMax) tree.push_back(make_pair(n.first + 1, n.second * 2));
      if (n.second * 2 + 1< treeMax) tree.push_back(make_pair(n.first + 1, n.second * 2 + 1));
    }
  }
  

  cout << num << endl;
  
  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   cin >> *it;
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   if (*it % 2 == 0) ++num;
  // cout << num << endl;
  
  return 0;
}
