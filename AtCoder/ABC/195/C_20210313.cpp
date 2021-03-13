#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n;
  cin >> n;

  ll x = 1;
  int power = 0;
  for (int i = 0; pow(10L, i) <= n; i++) {
    power = i;
  }
  
  ll count = 0;
  for (int i = 3; i < power; i++) {
    count += i/3 * (pow(10L, i+1) - pow(10L, i));
  }
  count += power/3 * (n - pow(10L, power) + 1);
  cout << count << endl;
  
  return 0;
}
