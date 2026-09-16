

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> f(n);
        for(int i = 0; i < n; i++) {
            cin >> f[i];
        }

        long long sum = 0;

        // Each tool can contribute at most (a - 1)
        for(int i = 0; i < n; i++) {
            sum += min(f[i], a - 1);
        }

        // Initial timer contributes (b - 1) seconds
        long long answer = sum + b;

        cout << answer << "\n";
    }

    return 0;
}
