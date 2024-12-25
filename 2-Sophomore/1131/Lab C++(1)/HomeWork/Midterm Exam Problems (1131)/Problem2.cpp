// Problem 2:
// Write a function that compresses a given string by replacing consecutive identical characters with the character followed by the count of repetitions. If the "compressed" string is not shorter than the original string, return the original.
// Input: A string s (containing uppercase and lowercase letters only).
// Output: A compressed string if it's shorter; otherwise, the original string.
// Example:
// Input: s = "aabcccccaaa"
// Output: "a2b1c5a3"
// Input: s = "abcd"
// Output: "abcd"  // Compression does not make the string shorter
// Constraints: The length of s is between 1 and 100.

#include <iostream>
#include <string>

using namespace std;

string compressString(const string& s) {
    string compressed;
    int count = 1;
    for (int i = 1; i <= s.size(); ++i) {
        if (i < s.size() && s[i] == s[i - 1]) {
            ++count;
        } else {
            compressed += s[i - 1] + to_string(count);
            count = 1;
        }
    }
    return compressed.size() < s.size() ? compressed : s;
}

int main() {
    string s = "aabcccccaaa";
    cout << compressString(s) << endl;
    return 0;
}
