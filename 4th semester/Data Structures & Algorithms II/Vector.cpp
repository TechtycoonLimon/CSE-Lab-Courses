#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // Adding elements
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Accessing elements
    cout << "First element: " << vec[0] << endl;
    cout << "Using at(): " << vec.at(1) << endl;

    // Size of vector
    cout << "Size: " << vec.size() << endl;

    // Iterating through vector
    cout << "Elements: ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Removing last element
    vec.pop_back();

    // After pop_back
    cout << "After pop_back, Size: " << vec.size() << endl;

    // Insert element at index 1
    vec.insert(vec.begin() + 1, 15);

    // Erase element at index 0
    vec.erase(vec.begin());

    // Clear all elements
    vec.clear();
    cout << "After clear, Size: " << vec.size() << endl;

    return 0;
}
