#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  long long M;
  if (!(cin >> N >> M)) return 0;

  vector<long long> P(N + 1);
  P[0] = 0;
  for (int i = 1; i <= N; i++) {
    cin >> P[i];
  }

  vector<long long> sum2;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      sum2.push_back(P[i] + P[j]);
    }
  }

  sort(sum2.begin(), sum2.end());
  sum2.erase(unique(sum2.begin(), sum2.end()), sum2.end());

  long long max_score = 0;

  for (long long a : sum2) {
    if (a > M) continue;

    long long target = M - a;

    auto it = upper_bound(sum2.begin(), sum2.end(), target);

    if (it != sum2.begin()) {
      long long b = *(--it);
      max_score = max(max_score, a + b);
    }
  }

  cout << max_score << endl;

  return 0;
}
