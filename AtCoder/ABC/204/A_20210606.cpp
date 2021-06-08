#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int, int>;

int main() {
  int x, y;
  cin >> x >> y;
  if (x == y) {
    cout << x << endl;
  } else {
    switch(x + y) {
      case 1:
        cout << 2 << endl;
        break;

      case 2:
        cout << 1 << endl;
        break;
      
      case 3:
        cout << 0 << endl;
        break;
    }
  }
  return 0;
}
