#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int result = -1;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > a[i + 1]) {
                result = i;  // 条件を満たす最大のインデックスを更新
            }
        }

        cout << result << endl;
    }
    return 0;
}

// Sample input
// 4
// 10 1 2 2 3 5 6 7 7 7 8
// 10 1 2 4 3 5 6 7 10 9 18
// 5 1 3 2 9 11
// 10 1 2 2 3 2 6 7 7 7 8

// Sample output
// -1
// 7
// 1
// 3