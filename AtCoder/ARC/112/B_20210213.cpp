#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  /*
   * b = 5, c = 14のとき
   * 5から引きまくると-1までいける。この -2 が minB_p
   * 5に-1をかけた後に引きまくると-11までいける。この -11 が minB_m
   * minB_p に向かう過程で、-1になった時 c=2だから、そのタイミングで-1をかけたものが1で、maxB_m
   * minB_m に向かう過程で、-11になった時c=1だから、そのタイミングで-1をかけたものが11で、maxB_p
   *
   * minB_p ... maxB_p
   * minB_m ... maxB_m のように並べると、
   *                              -2 -1 0 1 2 3 4 5 6 7 8 9 10 11  ← プラスの世界(元の数字に-1を偶数回かけたものたち)
   * -11 -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1                        ← マイナスの世界(元の数字に-1を奇数回かけたものたち)
   *
   * ここで被っている数字の個数をxとすると、x = 1 - (-2) + 1 = 4となる。
   * bの初期値がマイナスである場合も考慮し、実際にはminとmaxを使って求めている。
   */
  ll b, c;
  cin >> b >> c;
  ll minB_p = b - c/2;
  ll minB_m = -b - (c-1)/2;
  ll maxB_p;
  if (c == 1) {
    maxB_p = b;
  } else {
    maxB_p = c % 2 == 0 ? -minB_m : -minB_m - 1;
  }
  ll maxB_m = c % 2 == 0 ? -minB_p - 1 : -minB_p;
  ll x = 0;
  if (minB_p <= maxB_m) {
    x = min(maxB_p, maxB_m) - max(minB_p, minB_m) + 1;
  }
  //cout << minB_p << ", " << maxB_p << endl;
  //cout << minB_m << ", " << maxB_m << endl;
  cout << (maxB_p - minB_p + 1) + (maxB_m - minB_m + 1) - x << endl;
  return 0;
}
