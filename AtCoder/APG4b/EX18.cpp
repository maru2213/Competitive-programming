#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  vector<vector<string>> table(N, vector<string>(N));
  for (int i = 0; i < M; i++) {
    table.at(A.at(i) - 1).at(B.at(i) - 1) = "o";
    table.at(B.at(i) - 1).at(A.at(i) - 1) = "x";
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      string s = table.at(i).at(j);
      if (s == "") {
        cout << "-";
      } else {
        cout << s;
      }
      if (j == N - 1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
}
