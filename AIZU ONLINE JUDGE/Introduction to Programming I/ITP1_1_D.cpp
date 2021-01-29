#include <bits/stdc++.h>
using namespace std;

int main() {
  int s_in;
  int h, m, s;
  cin >> s_in;
  h = s_in / 3600;
  s_in -= h * 3600;
  m = s_in / 60;
  s = s_in - (m * 60);
  cout << h << ":" << m << ":" << s << endl;
  return 0;
}
