#include <iostream>
#include <vector>
#include <algorithm> // 他のアルゴリズム関数用

using namespace std;

// GCD 関数の自作
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b;

    // 最大公約数を計算し、ベクター b に追加
    for (int j = 0; j < n / 2; ++j) {
        int gcd_value = gcd(a[j], a[n - 1 - j]);
        b.push_back(gcd_value);
    }

    // 出力
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i];
        if (i < b.size() - 1) cout << " "; // 最後の要素以外にはスペースを追加
    }

    cout << endl;

    return 0;
}
