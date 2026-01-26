#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int e_right = 0;
  for (int i = 1; i < N; ++i) {
    if (S[i] == 'E') e_right++;
  }

  int w_left = 0;
  int min_turn = e_right;

  for (int i = 1; i < N; ++i) {
    if (S[i-1] == 'W') w_left++;
    if (S[i] == 'E') e_right--;

    min_turn = min(min_turn, w_left + e_right);
  }

  cout << min_turn << endl;

  return 0;
}
