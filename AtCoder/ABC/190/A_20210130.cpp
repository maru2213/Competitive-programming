#include <bits/stdc++.h>
using namespace std;

int main() {
  string result;
  int a, b, c;
  cin >> a >> b >> c;
  if (c == 0) {
    if (a <= b) {
      result = "Aoki";
    } else {
      result = "Takahashi";
    }
  } else {
    if (a >= b) {
      result = "Takahashi";
    } else {
      result = "Aoki";
    }
  }
  cout << result << endl;
  return 0;
}
