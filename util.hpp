
#include "bits/stdc++.h"
using namespace std;

template <typename iterator>
size_t maxElement(iterator beginIt, iterator endIt) {
  return max_element(beginIt, endIt);
}

template <typename iterator>
size_t minElement(iterator beginIt, iterator endIt) {
  return min_element(beginIt, endIt);
}

template <typename iterator> size_t maxIndex(iterator beginIt, iterator endIt) {
  return distance(beginIt, *max_element(beginIt, endIt));
}

template <typename iterator> size_t minIndex(iterator beginIt, iterator endIt) {
  return distance(beginIt, *min_element(beginIt, endIt));
}

template <typename iterator> int sum(iterator beginIt, iterator endIt) {
  return accumulate(beginIt, endIt, 0);
}
