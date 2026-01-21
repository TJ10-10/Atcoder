#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  long long C, K;
  if (!(cin >> N >> C >> K)) return 0;

  vector<long long> T(N);
  for (int i = 0; i < N; i++) {
    cin >> T[i];
  }

  sort(T.begin(), T.end());

  int bus_count = 0;
  int i = 0;

  while (i < N) {
    bus_count++;

    long long first_passenger_time = T[i];
    int start_index = i;

    while (i < N && i - start_index < C && T[i] <= first_passenger_time + K) {
      i++;
    }
  }

  cout << bus_count << endl;

  return 0;
}
