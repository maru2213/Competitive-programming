#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;

  int zeroCount_s = 0;
  int zeroCount_t = 0;
  for (int i = 1; i <= n; i++) {
    if (s[i - 1] == t[i - 1] && zeroCount_s == zeroCount_t) {
      continue;
    }
    if (s[i - 1] == '0') {
      zeroCount_s++;
    }
    if (t[i - 1] == '0') {
      zeroCount_t++;
    }
  }

  if (zeroCount_s == zeroCount_t) {
    cout << zeroCount_s << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
