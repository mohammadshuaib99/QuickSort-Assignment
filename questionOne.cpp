#include <iostream>
#include <vector>

using namespace std;

void fixSwappedElements(vector<int>& arr) {
    int n = arr.size();

    int first, middle, last;

    // Traverse the array to find the two swapped elements
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            last = i;
            break;
        }
    }

    // Find the middle element
    for (middle = first + 1; middle < last; middle++) {
        if (arr[middle] > arr[middle + 1]) {
            break;
        }
    }

    // Swap the two elements to fix the array
    swap(arr[first], arr[middle]);

    // Output the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3, 8, 6, 7, 5, 9, 10};

    cout << "Original Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    fixSwappedElements(arr);

    return 0;
}

// output
// Original Array: 3 8 6 7 5 9 10 
// Sorted Array: 3 7 6 8 5 9 10