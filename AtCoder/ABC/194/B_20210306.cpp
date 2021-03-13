#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  int mina = 1000000;
  int minb = 1000000;
  int t = 1000000;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    t = min(t, min(a+b, min(max(mina, b), max(a, minb))));
    mina = min(mina, a);
    minb = min(minb, b);
  }
  cout << t << endl;
  return 0;
}