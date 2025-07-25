#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Front and back elements
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Dequeue
    q.pop();
    cout << "After pop, Front: " << q.front() << endl;

    // Check if empty
    if (q.empty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue is not empty\n";
    }

    // Clearing queue manually
    while (!q.empty()) {
        cout << "Removing: " << q.front() << endl;
        q.pop();
    }

    return 0;
}
