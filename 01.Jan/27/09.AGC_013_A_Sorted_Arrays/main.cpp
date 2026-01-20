# include <iostream>
# include <vector>

using namespace std;

int main() {
  int N;
  if (!(cin >> N)) return 0;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int count = 0;
  for (int i = 0; i < N; i++) {
    count++;

    int j = i + 1;
    while (j < N && A[i] == A[j]) {
      j++;
    }

    if (j < N) {
      if (A[i] < A[j]) {
        while (j + 1 < N && A[j] <= A[j + 1]) {
          j++;
        }
      } else {
        while (j + 1 < N && A[j] >= A[j + 1]) {
          j++;
        }
      }
    }

    i = j;
  }

  cout << count << endl;

  return 0;
}
