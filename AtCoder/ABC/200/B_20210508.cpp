#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k;
  cin >> n >> k;
  rep(i, k) {
    if (n % 200 == 0) {
      n /= 200;
    } else {
      n = n * 1000 + 200;
    }
  }
  cout << n << endl;
  return 0;
}
