#include <bits/stdc++.h>
using namespace std;
int Distinct(vector<int> &A) {
  vector<int>::iterator itr = A.begin();
  unordered_set<int> s;
  for (auto curr = A.begin(); curr != A.end(); ++curr) {
    if (s.insert(*curr).second) {
      *itr++ = *curr;
    }
  }
  A.erase(itr, A.end());
  return A.size();
}
