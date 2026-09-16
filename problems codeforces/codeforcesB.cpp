#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long total = 0;
    for (int i = 0; i < n - 1; i++) {
        total += abs(a[i] - a[i + 1]);
    }

    long long max_gain = 0;

    for (int i = 1; i <= n - 2; i++) {
        long long gain =
            abs(a[i - 1] - a[i]) +
            abs(a[i] - a[i + 1]) -
            abs(a[i - 1] - a[i + 1]);

        max_gain = max(max_gain, gain);
    }

    cout << total - max_gain << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
