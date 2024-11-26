#include <iostream>
#include <queue>

using namespace std;

void interleaveQueue(queue<int>& q) {
    if (q.size() % 2 != 0) {
        cout << "Queue length is not even!" << endl;
        return;
    }

    int halfSize = q.size() / 2;
    queue<int> firstHalf;

    for (int i = 0; i < halfSize; ++i) {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty()) {
        q.push(firstHalf.front());
        firstHalf.pop();
        q.push(q.front());
        q.pop();
    }
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Original Queue: ";
    printQueue(q);

    // キューを並び替える
    interleaveQueue(q);

    cout << "Interleaved Queue: ";
    printQueue(q);

    return 0;
}
