#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end());

  int ans = 0;
  int i = 0;
  while (i < N) {
    int j = i;
    while (j < N && A[j] == A[i]) {
      j++;
    }

    if ((j - i) % 2 != 0) {
      ans++;
    }

    i = j;
  }

  cout << ans << endl;

  return 0;
}
