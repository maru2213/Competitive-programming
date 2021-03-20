#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;

  int count = 0;
  for (int i = 1; true; i++) {
    string s = to_string(i) + to_string(i);
    ll x = stoll(s);
    if (x <= n)
      count++;
    else
      break;
  }
  cout << count << endl;
  return 0;
}
