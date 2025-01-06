#include <iostream>
using namespace std;

int main() {
    int n = 6; // ピラミッドの高さ（行数を調整）

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) cout << " "; // 空白
        for (int k = 1; k <= 2 * i - 1; ++k) cout << "*"; // 星
        cout << endl;
    }

    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) cout << " "; // 空白
        for (int k = 1; k <= 2 * i - 1; ++k) cout << "*"; // 星
        cout << endl;
    }

    return 0;
}