#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  int N, M;

  cin >> N;
  map<string, int> counts;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    counts[s]++;
  }

  cin >> M;
  for (int i = 0; i < M; i++) {
    string t;
    cin >> t;
    counts[t]--;
  }

  int max_money = 0;

  for (auto const& [word, score] : counts) {
    max_money = max(max_money, score);
  }

  cout << max_money << endl;

  return 0;
}
