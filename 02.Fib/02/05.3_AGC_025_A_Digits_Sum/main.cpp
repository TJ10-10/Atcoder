#include <iostream>
#include <algorithm>
using namespace std;

int digit_sum(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  int min_total_sum = 1000000;

  for (int A = 1; A < N; A++) {
    int B = N - A;

    int current_sum = digit_sum(A) + digit_sum(B);

    if (current_sum < min_total_sum) {
      min_total_sum = current_sum;
    }
  }

  cout << min_total_sum << endl;

  return 0;
}
