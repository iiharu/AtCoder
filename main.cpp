
#include <bits/stdc++.h>
using namespace std;

/* clang-format off */
#define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

#define reps(i, a, n) for (int i = (a); i < (int)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n+1)
#define deps(i, a, n) for (int i = (a); i >= (int)(n); --i)
#define dep(i, n) deps(i, n, 0)
#define each(i, n) for (auto&& i : n)

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
  int num = 0; // num
  // int num = numeric_limits<int>::min(); // max
  // int num = numeric_limits<int>::max(); // min
  int N;
  array<int, 200000> A;
  string S;
  /* */

  cin >> N;

  rep(i, N) {
    cin >> A[i];
    A[i] -= i + 1;
  }

  sort(A.begin(), A.begin() + N);

  int b = A[N / 2];
  rep(i, N) num += abs(A[i] - b);

  cout << num << endl;
  return 0;
}
