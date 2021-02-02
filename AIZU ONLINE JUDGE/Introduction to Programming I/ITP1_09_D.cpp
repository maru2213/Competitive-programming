#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string str;
  int q;
  cin >> str >> q;
  rep(i, q) {
    string com;
    int a, b;
    cin >> com >> a >> b;
    if (com == "print") {
      cout << str.substr(a, b - a + 1) << endl;;
    } else if (com == "reverse") {
      string s = str.substr(a, b - a + 1);
      reverse(s.begin(), s.end());
      str = str.substr(0, a) + s + str.substr(b + 1);
    } else if (com == "replace") {
      string p;
      cin >> p;
      str = str.substr(0, a) + p + str.substr(b + 1);
    }
  }
  return 0;
}
