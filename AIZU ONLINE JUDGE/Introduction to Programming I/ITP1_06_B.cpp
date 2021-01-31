#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<string>> cards(4, vector<string>(13));
  vector<string> suits = {"S", "H", "C", "D"};
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int rank;
    string suit;
    cin >> suit >> rank;
    if (suit == suits.at(0)) {
      cards.at(0).at(rank - 1) = "o";
    } else if (suit == suits.at(1)) {
      cards.at(1).at(rank - 1) = "o";
    } else if (suit == suits.at(2)) {
      cards.at(2).at(rank - 1) = "o";
    } else if (suit == suits.at(3)) {
      cards.at(3).at(rank - 1) = "o";
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      if (cards.at(i).at(j) != "o") {
        cout << suits.at(i) << " " << j + 1 << endl;
      }
    }
  }
  return 0;
}
