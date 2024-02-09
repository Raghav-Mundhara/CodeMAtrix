#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector initialization
    vector<int> vec1; // Empty vector

    vector<int> vec2(5); // Vector with 5 elements, initialized to 0

    vector<int> vec3 = {1, 2, 3, 4, 5}; // Vector initialized with initializer list

    vector<int> vec4(vec3); // Vector initialized with another vector

    // Vector functions
    vec1.push_back(6); // Add element at the end

    vec2.pop_back(); // Remove last element

    vec3.insert(vec3.begin() + 2, 10); // Insert element at position 2

    vec4.erase(vec4.begin() + 3); // Erase element at position 3

    // Print vector elements
    cout << "vec1: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for (int num : vec2)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "vec3: ";
    for (int num : vec3)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "vec4: ";
    for (int num : vec4)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}