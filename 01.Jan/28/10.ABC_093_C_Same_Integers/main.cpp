#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v(3);
  for (int i = 0; i < 3; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int A = v[0];
  int B = v[1];
  int C = v[2];

  int target = C;
  int current_sum = A + B + C;
  int target_sum = target * 3;

  if ((target_sum - current_sum) % 2 != 0) {
    target++;
    target_sum = target * 3;
  }

  int ans = (target_sum - current_sum) / 2;

  cout << ans << endl;

  return 0;
}
