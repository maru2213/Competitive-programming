#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;

  vector<string> squares(h);
  rep(i, h) { cin >> squares[i]; }

  int count = 0;

  for (int i = y - 1; i >= 0 && i <= w - 1 && squares[x - 1][i] == '.'; i--) {
    count++;
  }
  for (int i = y; i >= 0 && i <= w - 1 && squares[x - 1][i] == '.'; i++) {
    count++;
  }
  for (int i = x - 2; i >= 0 && i <= h - 1 && squares[i][y - 1] == '.'; i--) {
    count++;
  }
  for (int i = x; i >= 0 && i <= h - 1 && squares[i][y - 1] == '.'; i++) {
    count++;
  }

  cout << count << endl;
  return 0;
}
