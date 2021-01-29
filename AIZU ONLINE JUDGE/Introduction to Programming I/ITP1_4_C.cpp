#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int a, b;
    string op;
    cin >> a >> op >> b;
    if (op == "?") {
      break;
    } else if (op == "+") {
      cout << a + b << endl;
    } else if (op == "-") {
      cout << a - b << endl;
    } else if (op == "*") {
      cout << a * b << endl;
    } else if (op == "/") {
      cout << a / b << endl;
    }
  }
  return 0;
}
