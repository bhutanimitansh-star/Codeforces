#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size) {
    if (size == 0 || size == 1) {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main() {
    int size;
    // cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size]; // dynamic array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool ans = isSorted(arr, size);
    if (ans) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    delete[] arr; // free memory
    return 0;
}
