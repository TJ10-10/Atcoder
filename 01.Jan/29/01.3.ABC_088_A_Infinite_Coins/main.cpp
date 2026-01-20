# include <iostream>
using namespace std;

int main() {
  int N, A;

  cin >> N;
  cin >> A;

  int remainder = N % 500;

  if (remainder <= A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
