#include <iostream>
#include <stack>
using namespace std;

class StackOperations {
private:
    stack<int> data;

public:
    void push(int n) {
        data.push(n);
        cout << n << " pushed to the stack" << endl;
    }

    void pop() {
        if (data.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        cout << data.top() << " popped from stack" << endl;
        data.pop();
    }

    void displayStack() {
        if (data.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        // Create a temporary stack for display
        stack<int> temp = data;
        cout << "\nElements in stack (top to bottom): ";
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    StackOperations s;

    // Push 5 integers
    cout << "Pushing 5 elements:" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Display stack after pushing
    cout << "\nStack after pushing 5 elements:";
    s.displayStack();

    // Pop top 2 elements
    cout << "\nPopping 2 elements:" << endl;
    s.pop();
    s.pop();

    // Display remaining elements
    cout << "\nRemaining elements in stack:";
    s.displayStack();

    return 0;
}
