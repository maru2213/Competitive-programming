#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  printf("%.8lf\n%.8lf\n%.8lf\n", a * b * sin(M_PI * c / 180) / 2, a + b + sqrt(a*a + b*b - 2*a*b*cos(M_PI*c/180)), b * sin(M_PI * c / 180));
  return 0;
}
