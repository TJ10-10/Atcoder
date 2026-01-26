#include <iostream>

using namespace std;

int main() {
  long long a, b, x;
  cin >> a >> b >> x;

  long long count_b = b / x + 1;

  long long count_a_minus_1;
  if (a == 0) {
    count_a_minus_1 = 0;
  } else {
    count_a_minus_1 = (a - 1) / x + 1;
  }

  cout << count_b - count_a_minus_1 << endl;

  return 0;
}
