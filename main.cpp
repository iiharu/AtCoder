
#include "bits/stdc++.h"

// #define int long long

using namespace std;

signed main(void) {

  int ans = 0;

  int n, k;
  cin >> n >> k;
  // vector<int> v(n);
  deque<int> v(n);
  for (auto it = v.begin(); it != v.end(); ++it)
    cin >> *it;

  for (int a = 0; a <= min(n, k); ++a) {

    for (int b = 0; b <= min(n, k) - a; ++b) {
      deque<int> d = v;
      vector<int> hand(a + b);

      for (int i = 0; i < a; ++i) {
        hand.push_back(d.front());
        d.pop_front();
      }

      for (int i = 0; i < b; ++i) {
        hand.push_back(d.back());
        d.pop_back();
      }

      sort(hand.begin(), hand.end());

      for (int i = 0; i < min(k - (a + b), (int)hand.size()); ++i) {
        if (hand[i] < 0) hand[i] = 0;
        else break;
      }

      int val = accumulate(hand.begin(), hand.end(), 0);
      ans = max(val, ans);
    }
  }
  
  
  cout << ans << endl;
  
  return 0;
}
