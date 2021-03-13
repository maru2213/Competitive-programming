#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b, w;
  cin >> a >> b >> w;
  w *= 1000;

  bool flag = false;
  for (int i = 1; true; i++) {
      int h, l;
      h = b * i;
      l = a * i;
      if (flag) {
          if (w < l) {
              cout << i-1 << endl;
              break;
          }
      } else {
          if (l <= w && w <= h) {
              flag = true;
              cout << i << " ";
          }
          if (w < l) {
              cout << "UNSATISFIABLE" << endl;
              break;
          }
      }
  }
  return 0;
}
