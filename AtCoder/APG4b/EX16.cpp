#include <bits/stdc++.h>
using namespace std;

int main() {
  int old;
  int a;
  for (int i = 0; i < 5; i++) {
    cin >> a;
    if (i != 0) {
      if (a == old) {
        cout << "YES" << endl;
        return 0;
      }
    }
    old = a;
  }
  cout << "NO" << endl;
  return 0;
}
