#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; // テストケースの数
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        // リストの値を入力
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // 最大の i を見つける (a[i] > a[i+1])
        int result = -1;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] > a[i + 1])
            {
                result = i; // 条件を満たす最大の i を記録
            }
        }

        // 結果を出力
        cout << result << endl;
    }

    return 0;
}
