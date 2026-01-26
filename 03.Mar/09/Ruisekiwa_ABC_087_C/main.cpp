#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> A(2, vector<int>(N));
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> A[i][j];
    }
  }

  int max_candies = 0;

  for (int j = 0; j < N; ++j) {
    int current_sum = 0;

    for (int c = 0; c <= j; ++c) {
      current_sum += A[0][c];
    }

    for (int c = j; c < N; ++c) {
      current_sum += A[1][c];
    }

    max_candies = max(max_candies, current_sum);
  }

  cout << max_candies << endl;

  return 0;
}
