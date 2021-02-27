#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  ll ans = 10000000000;
  rep(i, n) {
    ll a, p, x;
    cin >> a >> p >> x;
    if (x-a >= 1) {
      ans = min(ans, p);
    }
  }
  if (ans == 10000000000) {
    ans = -1;
  }
  cout << ans << endl;
  return 0;
}
