#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  long long A, B, C, X, Y;
  if (!(cin >> A >> B >> C >> X >> Y)) return 0;

  long long min_cost = 1e18;

  for (int i = 0; i <= 2 * max(X, Y); i += 2) {
    long long current_A = i / 2;
    long long current_B = i / 2;

    long long need_A = max(0LL, X - current_A);
    long long need_B = max(0LL, Y - current_B);

    long long cost = (i * C) + (need_A * A) + (need_B * B);

    min_cost = min(min_cost, cost);
  }

  cout << min_cost << endl;

  return 0;
}
