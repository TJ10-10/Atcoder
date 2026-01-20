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

  int max_val = *max_element(A.begin(), A.end());
  int min_val = *min_element(A.begin(), A.end());

  cout << max_val - min_val << endl;

  return 0;
}
