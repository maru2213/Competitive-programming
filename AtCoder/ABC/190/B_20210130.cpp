#include <bits/stdc++.h>
using namespace std;

int main() {
  bool result = false;
  int n, s, d;
  cin >> n >> s >> d;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (x < s && y > d) {
      result = true;
      break;
    }
  }
  if (result) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
