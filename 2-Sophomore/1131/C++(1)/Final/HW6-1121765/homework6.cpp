#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

// LCSを計算する関数
int longestCommonSubsequence(const string& str1, const string& str2) {
    int m = str1.size();
    int n = str2.size();

    // DPテーブルの初期化
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // DPテーブルの計算
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) { 
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    string input;
    vector<pair<string, string>> testCases;

    // 入力全体を読み取る
    while (getline(cin, input)) {
        istringstream iss(input);
        string str1, str2;

        while (iss >> str1 >> str2) {
            testCases.emplace_back(str1, str2);
        }
    }

    // 各テストケースに対して結果を計算
    for (const auto& testCase : testCases) {
        int result = longestCommonSubsequence(testCase.first, testCase.second);
        cout << result << endl;
    }

    return 0;
}
