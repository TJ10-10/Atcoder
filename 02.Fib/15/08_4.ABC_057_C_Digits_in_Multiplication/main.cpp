#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int get_digits(long long x) {
  return to_string(x).length();
}

int main() {
  long long N;
  cin >> N;

  int min_f = 11;

  for (long long A = 1; A * A <= N; ++A) {
    if (N % A == 0) {
      long long B = N / A;

      int current_f = max(get_digits(A), get_digits(B));

      if (current_f < min_f) {
        min_f = current_f;
      }
    }
  }

  cout << min_f << endl;

  return 0;
}
