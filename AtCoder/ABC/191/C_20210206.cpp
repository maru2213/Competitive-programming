#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> squares(h);
  rep (i, h) {
    cin >> squares.at(i);
  }

  int count = 0;
  rep (i, h) {
    rep (j, w) {
      if (i == 0 || i == h) {
        continue;
      }
      if (squares.at(i).at(j) == '#') {
        if (squares.at(i-1).at(j) == squares.at(i).at(j-1)) {
          if (squares.at(i-1).at(j) == '.' || squares.at(i-1).at(j-1) == '.') {
            count++;
          }
        }
        if (squares.at(i).at(j-1) == squares.at(i+1).at(j)) {
          if (squares.at(i).at(j-1) == '.' || squares.at(i+1).at(j-1) == '.') {
            count++;
          }
        }
        if (squares.at(i+1).at(j) == squares.at(i).at(j+1)) {
          if (squares.at(i+1).at(j) == '.' || squares.at(i+1).at(j+1) == '.') {
            count++;
          }
        }
        if (squares.at(i).at(j+1) == squares.at(i-1).at(j)) {
          if (squares.at(i).at(j+1) == '.' || squares.at(i-1).at(j+1) == '.') {
            count++;
          }
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
