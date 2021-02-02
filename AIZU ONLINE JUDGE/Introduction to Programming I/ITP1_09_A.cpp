#include <bits/stdc++.h>
using namespace std;

int main() {
  int count = 0;
  string keyword;
  cin >> keyword;
  while (true) {
    string s;
    cin >> s;
    if (s == "END_OF_TEXT") {
      break;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s == keyword) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
