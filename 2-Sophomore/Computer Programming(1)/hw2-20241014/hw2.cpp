#include <iostream>
#include <vector>
#include <algorithm> // gcdを使うために必要
using namespace std;

int main() {
    int n;
    cin >> n;  // nの入力

    vector<int> a(n);  // 配列aの定義
    for (int i = 0; i < n; ++i) {
        cin >> a[i];  // 配列aの入力
    }

    vector<int> b;  // 結果を格納する配列b

    // ⌊n/2⌋まで繰り返し
    for (int j = 0; j < n / 2; ++j) {
        // a[j]とa[n-1-j]の最大公約数(GCD)を計算
        int gcd_value = __gcd(a[j], a[n - 1 - j]);
        b.push_back(gcd_value);  // 結果をbに追加
    }

    // 結果の出力
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
