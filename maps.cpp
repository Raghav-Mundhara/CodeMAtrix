#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main() {
    // Example using map
    map<int, string> myMap;

    // Inserting elements into the map
    myMap.insert({1, "Apple"});
    myMap.insert({2, "Banana"});
    myMap.insert({3, "Orange"});

    // Accessing elements in the map
    cout << "Value at key 2: " << myMap[2] << endl;

    // Iterating over the map
    for ( auto& pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Example using unordered_map
    unordered_map<int, string> myUnorderedMap;

    // Inserting elements into the unordered_map
    myUnorderedMap.insert({1, "Cat"});
    myUnorderedMap.insert({2, "Dog"});
    myUnorderedMap.insert({3, "Elephant"});

    // Accessing elements in the unordered_map
    cout << "Value at key 3: " << myUnorderedMap[3] << endl;

    // Iterating over the unordered_map
    for ( auto& pair : myUnorderedMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    string key = "Helloooooo";
    unordered_map<char, int> myUnorderedMap2;
    for(int i = 0; i < key.size(); i++) {
        myUnorderedMap2[key[i]]++;
    }
    for ( auto& pair : myUnorderedMap2) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    return 0;
}