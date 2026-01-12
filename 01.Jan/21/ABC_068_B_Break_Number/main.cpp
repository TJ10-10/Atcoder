# include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int max_divides = -1;
  int ans = 1;

  for (int i = 1; i <= N; i++) {
    int count = 0;
    int temp = i;

    while (temp > 0 && temp % 2 == 0) {
      temp /= 2;
      count++;
    }

    if (count > max_divides) {
      max_divides = count;
      ans = i;
    }
  }

  cout << ans << endl;
  return 0;
}
