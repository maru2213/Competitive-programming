#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  for (char &c : s) {
    if (isupper(c)) {
      c = tolower(c);
    } else {
      c = toupper(c);
    }
  }
  cout << s << endl;
  return 0;
}
