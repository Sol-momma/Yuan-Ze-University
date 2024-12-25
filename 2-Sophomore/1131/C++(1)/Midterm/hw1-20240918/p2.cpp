#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // テストケースの数を格納する変数
    cin >> t; // テストケースの入力を受け取る

    // テストケースごとに処理を行うループ
    while (t--) {
        int n; // 配列の要素数を格納する変数
        cin >> n; // 配列の要素数の入力を受け取る
        vector<int> a(n); // 要素数 n の配列を作成

        // 配列の要素を入力するループ
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // 各要素の入力を受け取る
        }

        int result = -1; // 条件を満たすインデックスを格納する変数（初期値は -1）
        
        // 配列内の要素をチェックするループ
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > a[i + 1]) { // 隣接する要素を比較し、左側が右側より大きい場合
                result = i; // 条件を満たすインデックスを result に格納
            }
        }

        // 結果を出力
        cout << result << endl; // 条件を満たす最大のインデックス、または -1 を出力
    }
    return 0; // プログラム終了
}
