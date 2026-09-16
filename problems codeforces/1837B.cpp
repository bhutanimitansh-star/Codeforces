#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int maxLen = 1;
        int currLen = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                currLen++;
            } else {
                maxLen = max(maxLen, currLen);
                currLen = 1;
            }
        }
        maxLen = max(maxLen, currLen);

        cout << maxLen + 1 << "\n";
    }
    return 0;
}
