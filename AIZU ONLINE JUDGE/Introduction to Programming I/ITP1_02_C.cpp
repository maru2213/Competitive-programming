#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int minimum = min(a, min(b, c));
  if (minimum == a) {
    cout << a << " " << min(b, c) << " " << max(b, c) << endl;
  } else if (minimum == b) {
    cout << b << " " << min(a, c) << " " << max(a, c) << endl;
  } else if (minimum == c) {
    cout << c << " " << min(a, b) << " " << max(a, b) << endl;
  }
  return 0;
}
