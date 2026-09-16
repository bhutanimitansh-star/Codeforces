#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;

    // Step 1: collect digits
    for (char c : s) {
        if (c != '+') {
            nums.push_back(c);
        }
    }

    // Step 2: sort digits
    sort(nums.begin(), nums.end());

    // Step 3: print with '+'
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << "+";
    }

    return 0;
}
