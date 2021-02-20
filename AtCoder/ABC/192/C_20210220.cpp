#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int f(int a) {
  string s = to_string(a);
  sort(s.begin(), s.end());
  int g2 = stoi(s);
  reverse(s.begin(), s.end());
  int g1 = stoi(s);
  return g1 - g2;
}

int main() {
  int n, k;
  cin >> n >> k;
  rep(i, k) {
    n = f(n);
  }
  cout << n << endl;
  return 0;
}
