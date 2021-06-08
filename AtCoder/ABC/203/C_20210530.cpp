#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int, int>;

int main() {
  int n;
  ll k;
  cin >> n >> k;
  vector<pair<ll, int>> friends(n);
  rep(i, n) {
    ll a;
    int b;
    cin >> a >> b;
    friends[i] = make_pair(a, b);
  }
  sort(friends.begin(), friends.end());

  ll village = 0;
  ll oldVillage = 0;
  int oldI = 0;
  while(k > 0) {
    oldVillage = village;
    village += k;
    k = 0;
    for (int i = oldI; ; i++) {
      if (i < n && oldVillage + 1 <= friends[i].first && friends[i].first <= village) {
        k += friends[i].second;
      } else {
        oldI = i;
        break;
      }
    }
  }
  cout << village << endl;
  return 0;
}
