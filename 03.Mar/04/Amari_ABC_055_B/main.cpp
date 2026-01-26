#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  long long power = 1;
  const long long MOD = 1000000007;

  for (int i = 1; i <= N; ++i) {
    power = (power * i) % MOD;
  }

  cout << power << endl;

  return 0;
}
