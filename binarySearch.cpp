#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Traditional Binary Search
int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // If element not found
}

// Traditional Lower Bound
int lowerBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }

    return left; // Returns the first element not less than target
}

// Traditional Upper Bound
int upperBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }

    return left; // Returns the first element greater than target
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 5, 5, 7, 8, 9};

    // Traditional binary search
    int target = 5;
    int index = binarySearch(arr, target);
    if (index != -1)
        cout << "Traditional Binary Search: Found at index " << index << endl;
    else
        cout << "Traditional Binary Search: Not found" << endl;

    // Traditional lower bound
    target = 5;
    int lbIndex = lowerBound(arr, target);
    cout << "Traditional Lower Bound: Found at index " << lbIndex << endl;

    // Traditional upper bound
    target = 5;
    int ubIndex = upperBound(arr, target);
    cout << "Traditional Upper Bound: Found at index " << ubIndex << endl;

    // Using STL binary_search
    if (binary_search(arr.begin(), arr.end(), target))
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
    // Using STL lower_bound and upper_bound
    auto lb = lower_bound(arr.begin(), arr.end(), 5);
    auto ub = upper_bound(arr.begin(), arr.end(), 5);
    cout << "STL Lower Bound: Found at index " << (lb - arr.begin()) << endl;
    cout << "STL Upper Bound: Found at index " << (ub - arr.begin()) << endl;

    return 0;
}
