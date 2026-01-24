#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> L(N);
  for (int i = 0; i < N; i++) {
    cin >> L[i];
  }

  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        long long a = L[i];
        long long b = L[j];
        long long c = L[k];

        if (a != b && b != c && c != a) {
          if (a + b > c && b + c > a && c + a > b) {
            count++;
          }
        }
      }
    }
  }

  cout << count << endl;

  return 0;
}

