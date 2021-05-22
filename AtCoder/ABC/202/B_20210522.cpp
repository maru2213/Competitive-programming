#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int, int>;

int main() {
  string s;
  cin >> s;

  string ans = "";
  for (int i = s.size() - 1; i >= 0; i--) {
    string character;
    if (s[i] == '6') {
      character = "9";
    } else if (s[i] == '9') {
      character = "6";
    } else {
      character = s[i];
    }
    ans.append(character);
  }
  cout << ans << endl;
  return 0;
}
