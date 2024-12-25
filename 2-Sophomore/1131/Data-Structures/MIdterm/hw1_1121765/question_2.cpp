#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printNextGreaterElement(const vector<int>& arr) {
    stack<int> stk;
    vector<int> nge(arr.size(), -1);

    for (int i = 0; i < arr.size(); ++i) {
        while (!stk.empty() && arr[stk.top()] < arr[i]) {
            nge[stk.top()] = arr[i];
            stk.pop();
        }
        stk.push(i);
    }

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " --> " << nge[i] << endl;
    }
}

int main() {
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(25);

    printNextGreaterElement(arr);

    return 0;
}
