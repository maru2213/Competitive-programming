#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  int sum = 0;
  while (true) {
    cin >> x;
    if (x == "0") {
      break;
    }
    for (char a : x) {
      string s = {a};
      sum += stoi(s);
    }
    cout << sum << endl;
    sum = 0;
  }
  return 0;
}
