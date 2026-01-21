#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  if (!(cin >> N >> M)) return 0;

  vector<int> count(N + 1, 0); 

  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;

    count[a]++;
    count[b]++;
  }

  for (int i = 1; i <= N; ++i) {
    cout << count[i] << endl;
  }

  return 0;
}
