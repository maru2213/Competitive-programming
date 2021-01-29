#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int64_t sum = 0;
  int maximum = (-1) * pow(10, 7);
  int minimum = pow(10, 7);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    maximum = max(a, maximum);
    minimum = min(a, minimum);
    sum += a;
  }
  cout << minimum << " " << maximum << " " << sum << endl;
  return 0;
}
