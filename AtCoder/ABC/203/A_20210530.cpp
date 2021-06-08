#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b) {
    cout << c << endl;
  } else if (b == c) {
    cout << a << endl;
  } else if (c == a) {
    cout << b << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
