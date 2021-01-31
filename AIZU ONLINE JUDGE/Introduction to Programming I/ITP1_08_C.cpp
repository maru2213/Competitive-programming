#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> count(26, 0);
  while (true) {
    string s;
    cin >> s;
    if (s == "") {
      break;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (char c : s) {
      if (c < 'a' || c > 'z') {
        continue;
      }
      count.at(c - 'a')++;
    }
  }
  for (int i = 0; i < 26; i++) {
    char c = i + 'a';
    cout << c << " : " << count.at(i) << endl;
  }
  return 0;
}
