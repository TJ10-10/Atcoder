#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int N, L;
  if (!(cin >> N >> L)) return 0;

  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  sort(S.begin(), S.end());

  for (int i = 0; i < N; i++) {
    cout << S[i];
  }
  cout << endl;

  return 0;
}
