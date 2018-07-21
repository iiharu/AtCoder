
#include <bits/stdc++.h>
using namespace std;

/* clang-format off */
#define int long long
// #define double long double
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

template <typename T> inline size_t maxElement(T beginIt, T endIt) { return max_element(beginIt, endIt); }
template <typename T> inline size_t minElement(T beginIt, T endIt) { return min_element(beginIt, endIt); }
template <typename T> inline size_t maxIndex(T beginIt, T endIt) { return distance(beginIt, *max_element(beginIt, endIt)); }
template <typename T> inline size_t minIndex(T beginIt, T endIt) { return distance(beginIt, *min_element(beginIt, endIt)); }
template <typename T> inline int sum(T beginIt, T endIt) { return accumulate(beginIt, endIt, 0); }
template <typename T> inline int mean(T beginIt, T endIt) { return sum(beginIt, endIt) / distance(beginIt, endIt); }
template <typename T> inline void debug(T x) { cerr << x << " " << "(L:" << __LINE__ << ")" << endl; }
/* clang-format on */

signed main(void) {
  /* */
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  // double num; // num
  // num = 0; // count, result
  // num = numeric_limits<double>::min(); // max
  // num = numeric_limits<double>::max(); // min
  int N, M;
  // array<int, 100000> A;
  // array<int, 100000> B;
  string S;
  /* */

  array<pair<int, int>, 100000> A;
  vector<int> B; // Bridge
  cin >> N >> M;
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    A[i] = make_pair(a, b);
  }

  sort(A.begin(), A.begin() + M);

  for (int i = 0; i < M; ++i) {
    int Ai1, Ai2;
    Ai1 = A[i].first;
    Ai2 = A[i].second;
    if (Ai1 == Ai2) {
        continue;
    }
    b = Ai1;
    for (int j = i + 1; j < M; ++j) {
      int Aj1, Aj2;
      Aj1 = A[j].first;
      Aj2 = A[j].second;
      if (Aj1 == Aj2) {
        continue;
      }
      // cout << "[" << Aj1 << "," << Aj2 << ")" << endl;
      if (Aj1 <= Ai1 && Ai2 < Aj2) {
        A[j] = make_pair(0,0);
      } else if (Ai1 <= Aj2 && Aj1 < Ai2 && Ai2 <= Aj2) {
        Ai1 = Aj1;
        A[j] = make_pair(0,0);
      } else if (Aj1 <= Ai1 && Ai1 < Aj2 && Aj2 <= Ai2) {
        Ai2 = Aj2;
        A[j] = make_pair(0,0);
      } else if (Ai1 <= Aj1 && Aj1 < Ai2 && Aj2 <= Ai2) {
        Ai1 = Aj1;
        Ai2 = Aj2;
        A[j] = make_pair(0,0);
      }
      // cout << i << "[" << Ai1 << "," << Ai2 << ")" << endl;
    }
    // cout << i << "[" << Ai1 << "," << Ai2 << ")" << endl;
    
    A[i] = make_pair(0,0);
    num += 1;
  }
  
  cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
