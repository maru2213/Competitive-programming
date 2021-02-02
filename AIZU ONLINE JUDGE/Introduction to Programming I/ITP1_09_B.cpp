#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  while (true) {
    string s;
    cin >> s;
    if (s == "-") {
      break;
    }
    int m;
    cin >> m;
    rep(i, m) {
      int h;
      cin >> h;
      s = s.substr(h, s.size() - h) + s.substr(0, h);
    }
    cout << s << endl;
  }
  return 0;
}
