#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void printFirstNegativeInteger(const vector<int>& arr, int k) {
    queue<int> negatives;
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            negatives.push(i);
        }

        if (i >= k - 1) {
            if (!negatives.empty() && negatives.front() < i - k + 1) {
                negatives.pop();
            }

            if (!negatives.empty()) {
                cout << arr[negatives.front()] << " ";
            } else {
                cout << "0 ";
            }
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr;
    arr.push_back(-8);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(-6);
    arr.push_back(10);

    int k = 2;

    printFirstNegativeInteger(arr, k);

    return 0;
}
