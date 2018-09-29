
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
  map<int, int> m;

  vector<pair<int, int>> v;
  
  cin >> N;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < i; ++j) {
      m[i]++;
    }
  }

  for (auto it = m.begin(); it != m.end(); ++it) {
    cout << (*it).first << ": " << (*it).second << endl;
    v.push_back(make_pair((*it).second,(*it).first));
  }

  sort(v.begin(), v.end());

  cout << "Reverse" << endl;
  
  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << (*it).first << ": " << (*it).second << endl;
  }
  
  
  // cin >> N;
  // for (auto it = A.begin(); it < A.begin() + N; ++it) cin >> *it;

  // for (auto it = A.begin(); it < A.begin() + N; ++it) if (*it % 2 == 0) ++num;

  // cout << num << endl;;
  
  return 0;
}
