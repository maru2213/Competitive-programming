#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int t;
  cin >> t;
  rep(i, t) {
    ll n;
    cin >> n;
    if (n % 2 == 1) {
      cout << "Odd" << endl;
      continue;
    }
    n /= 2;
    if (n % 2 == 1) {
      cout << "Same" << endl;
    } else {
      cout << "Even" << endl;
    }
  }
  return 0;
}
