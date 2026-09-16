#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        // Minimum sum: 1 + 2 + ... + k
        long long minSum = k * (k + 1) / 2;

        // Maximum sum: n + (n-1) + ... + (n-k+1)
        long long maxSum = k * (2 * n - k + 1) / 2;

        if(x >= minSum && x <= maxSum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
