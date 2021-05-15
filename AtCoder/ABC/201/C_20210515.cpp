#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

bool check(string s, string option) {
  for (int i = 0; i < 10; i++) {
    bool isContained = option.find(to_string(i)) != string::npos;
    if (isContained && s[i] == 'x') {
      return false;
    } else if (!isContained && s[i] == 'o') {
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  
  int count = 0;
  ios::fmtflags curret_flag = cout.flags();
  for (int i = 0; i < 10000; i++) {
    ostringstream stream;
    stream << setw(4) << setfill('0') << i;
    string option = stream.str();

    if (check(s, option)) {
      count++;
    }
  }
  cout.flags(curret_flag);

  cout << count << endl;
  return 0;
}
