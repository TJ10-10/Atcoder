#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int start = max(A, C);
  int end = min(B, D);

  int overlap = max(0, end - start);

  cout << overlap << endl;

  return 0;
}
