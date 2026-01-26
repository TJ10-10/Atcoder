#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  long long ans = K;

  for (int i = 0; i < N - 1; ++i) {
    ans *= (K - 1);
  }

  cout << ans << endl;

  return 0;
}
