#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> a(3);
  rep(i, 3) {
    cin >> a[i];
  }
  if (a[0] + a[1] == 2 * a[2] || a[1] + a[2] == 2 * a[0] || a[2] + a[0] == 2 * a[1]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
