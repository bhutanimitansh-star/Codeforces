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

        long long global_min = LLONG_MAX;
        long long sum_second = 0;
        long long min_second = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;

            vector<long long> a(m);
            for (int j = 0; j < m; j++) cin >> a[j];

            sort(a.begin(), a.end());

            long long mn1 = a[0];
            long long mn2 = a[1];

            global_min = min(global_min, mn1);
            sum_second += mn2;
            min_second = min(min_second, mn2);
        }

        long long answer = global_min + sum_second - min_second;
        cout << answer << "\n";
    }
}
