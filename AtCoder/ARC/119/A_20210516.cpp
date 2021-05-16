#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  ll a = 0, b = 60, c = 0;
  cin >> n;

  ll ans = 10e17;
  for (b = 60; b >= 0; b--) {
    if ((ll)pow(2, b) > n) {
      continue;
    }
    c = n % (ll)pow(2, b);
    a = n / (ll)pow(2, b);
    ans = min(ans, a + b + c);
  }
  cout << ans << endl;

  return 0;
}
