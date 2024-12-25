// Stacks:
// Question: 1
// Write a C++ program to reverse a stack using recursion, without using any loop.
// Example:
// Input: elements present in stack from top to bottom 28 29 30 31
// Output: 31 30 29 28 
#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int>& stk, int item) {
    if (stk.empty()) {
        stk.push(item);
        return;
    }

    int top = stk.top();
    stk.pop();

    insertAtBottom(stk, item);

    stk.push(top);
}

void reverseStack(stack<int>& stk) {
    if (stk.empty()) {
        return;
    }

    int top = stk.top();
    stk.pop();

    reverseStack(stk);

    insertAtBottom(stk, top);
}

void printStack(stack<int> stk) {
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}

int main() {
    stack<int> stk;

    stk.push(31);
    stk.push(30);
    stk.push(29);
    stk.push(28);


    reverseStack(stk);

    cout << "Reversed Stack: ";
    printStack(stk);

    return 0;
}
