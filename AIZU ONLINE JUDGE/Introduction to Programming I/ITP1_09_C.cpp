#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int point_taro = 0;
  int point_hanako = 0;
  int n;
  cin >> n;
  rep(i, n) {
    string card_taro, card_hanako;
    cin >> card_taro >> card_hanako;
    if (card_taro > card_hanako) {
      point_taro += 3;
    } else if (card_taro < card_hanako) {
      point_hanako += 3;
    } else {
      point_taro++;
      point_hanako++;
    }
  }
  cout << point_taro << " " << point_hanako << endl;
  return 0;
}
