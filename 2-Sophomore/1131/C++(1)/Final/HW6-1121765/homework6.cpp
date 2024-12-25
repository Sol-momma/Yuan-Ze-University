#include <iostream>
#include <vector>
#include <string>
#include <cctype>  // For std::isspace
using namespace std;

// Function to calculate the Longest Common Subsequence
int longestCommonSubsequence(const string& str1, const string& str2) {
    int m = str1.size();
    int n = str2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

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

// Function to skip whitespace characters
void skipWhitespace(istream& in) {
    while (in.good() && std::isspace(in.peek())) {
        in.ignore();
    }
}

// Function to read a string (ignoring whitespace)
string readString(istream& in) {
    string result;
    char c;
    
    // Skip initial whitespace
    skipWhitespace(in);
    
    // Read characters one by one
    while (in.get(c)) {
        if (!std::isspace(c)) {
            result += c;
        } else {
            // Break when whitespace is found
            break;
        }
    }
    return result;
}

int main() {
    string str1, str2;
    
    // Process until EOF
    while (true) {
        // Skip whitespace and read first string
        str1 = readString(cin);
        if (str1.empty() && cin.eof()) break;
        
        // Skip whitespace and read second string
        str2 = readString(cin);
        if (str2.empty() && cin.eof()) break;
        
        // Calculate and output LCS result
        int result = longestCommonSubsequence(str1, str2);
        cout << result << endl;
    }

    return 0;
}