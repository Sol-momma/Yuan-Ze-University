#include <iostream>
#include <vector>
#include <algorithm> // For std::gcd (commented out as custom_gcd is used)

using namespace std;

// 自前の GCD 関数 (2つの整数の最大公約数を計算)
int custom_gcd(int a, int b) {
    while (b != 0) { // b が 0 になるまでループ
        int temp = b; // b の値を一時的に保存
        b = a % b; // a を b で割った余りを b に代入
        a = temp; // a に b の元の値を代入
    }
    return a; // 最大公約数を返す
}

// 配列内の要素のペアから最大公約数を求める関数
vector<int> find_gcd_pairs(int n, const vector<int>& array) {
    int mid = n / 2; // 中間点を計算
    vector<int> gcd_values; // 最大公約数を格納するベクトル

    for (int j = 1; j <= mid; ++j) { // 1 から mid までループ
        int bj = custom_gcd(array[j - 1], array[n - j]); // 対応する要素の GCD を計算
        gcd_values.push_back(bj); // GCD を結果ベクトルに追加
    }

    return gcd_values; // 結果を返す
}

int main() {
    int n;
    cout << "Enter the value of n: "; // n の入力を促す
    cin >> n;

    vector<int> array(n); // n 個の整数を格納するベクトル
    cout << "Enter " << n << " integers: "; // n 個の整数の入力を促す
    for (int i = 0; i < n; ++i) { // ベクトルに値を入力
        cin >> array[i];
    }

    vector<int> gcd_results = find_gcd_pairs(n, array); // 最大公約数を求める
    cout << "GCD values: "; // 結果の表示を準備
    for (int result : gcd_results) { // 結果ベクトルの各要素を出力
        cout << result << " ";
    }
    cout << endl; // 最後に改行

    return 0; // プログラム終了
}
