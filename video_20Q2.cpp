#include <bits/stdc++.h>
using namespace std;

void Merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements
    while (i < n) {
        arr3[k++] = arr1[i++];
    }
    while (j < m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 4, 5, 9};
    int arr2[] = {3, 7, 10};
    int n = 5, m = 3;
    int arr3[n + m]; // allocate enough space

    Merge(arr1, n, arr2, m, arr3);
    print(arr3, n + m);

    return 0;
}
