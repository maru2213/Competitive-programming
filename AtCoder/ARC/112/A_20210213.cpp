#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int t;
  cin >> t;
  rep(i,t) {
    ll l, r;
    cin >> l >> r;
    if (r < 2*l) {
      cout << 0 << endl;
      return 0;
    }
    cout << ((r - 2*l + 1) + 1) * (r - 2*l + 1) / 2 << endl;
  }
  return 0;
}
