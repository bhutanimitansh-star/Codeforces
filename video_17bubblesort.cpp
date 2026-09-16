#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    string line;
    getline(cin, line); // read full line e.g. "2,1,8,5,6"
    
    stringstream ss(line);
    vector<int> arr;
    int num;
    char comma;
    
    while (ss >> num) {
        arr.push_back(num);
        ss >> comma; // read and discard comma
    }

    int n = arr.size();
    bubbleSort(arr, n);

    for (int x : arr) cout << x << " ";
    cout << endl;
}
