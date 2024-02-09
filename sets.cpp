#include <iostream>
#include <set>
using namespace std;

int main() {
    // Set initialization
    set<int> set1; // Empty set

    set<int> set2 = {1, 2, 3, 4, 5}; // Set initialized with initializer list

    set<int> set3(set2); // Set initialized with another set

    // Set functions
    set1.insert(6); // Add element to the set

    set2.erase(3); // Remove element from the set

    // Print set elements
    cout << "set1: ";
    for (int num : set1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "set2: ";
    for (int num : set2) {
        cout << num << " ";
    }
    cout << endl;

    cout << "set3: ";
    for (int num : set3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}