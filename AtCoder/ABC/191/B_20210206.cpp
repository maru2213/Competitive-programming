#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  bool isFirst = true;
  int n, x;
  cin >> n >> x;
  rep (i, n) {
    int a;
    cin >> a;
    if (a != x) {
      if (!isFirst) {
        cout << " ";
      }
      cout << a;
      isFirst = false;
    }
  }
  cout << endl;
  return 0;
}
