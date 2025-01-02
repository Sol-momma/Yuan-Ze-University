#include <iostream>
#include <queue>
using namespace std;

class QueueOperations {
private:
    queue<int> data;

public:
    void enqueue(int n) {
        data.push(n);
        cout << n << " enqueued to the queue" << endl;
    }

    void dequeue() {
        if (data.empty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << data.front() << " dequeued from queue" << endl;
        data.pop();
    }

    void displayQueue() {
        if (data.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        queue<int> temp = data;  // Create a temporary queue for display
        cout << "\nElements in queue: ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    QueueOperations q;

    // Enqueue 5 integers
    cout << "Enqueueing 5 elements:" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Display queue after enqueueing
    cout << "\nQueue after enqueuing 5 elements:";
    q.displayQueue();

    // Dequeue first 2 elements
    cout << "\nDequeuing 2 elements:" << endl;
    q.dequeue();
    q.dequeue();

    // Display remaining elements
    cout << "\nRemaining elements in queue:";
    q.displayQueue();

    return 0;
}
