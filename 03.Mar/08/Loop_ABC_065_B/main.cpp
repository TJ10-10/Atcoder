#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // ボタンの遷移先を格納する配列 (1-indexedのため N+1 確保)
    vector<int> a(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> a[i];
    }

    int current_button = 1; // 最初はボタン 1 が光っている
    int count = 0;

    // 最大で N 回ボタンを押す。それ以上はループしている証拠。
    for (int i = 0; i < N; ++i) {
        if (current_button == 2) {
            cout << count << endl;
            return 0;
        }

        // 次のボタンへ移動
        current_button = a[current_button];
        count++;
    }

    // N 回押しても 2 にならなかった場合
    cout << -1 << endl;

    return 0;
}
