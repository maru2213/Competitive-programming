#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int k;
  cin >> k;
  int count = 0;
  for (int i = 1; i <= k; ++i) {
    for (int j = 1; j <= k/i; ++j) {
      count += k / (i*j);
    }
  }
  cout << count << endl;
  return 0;
}
