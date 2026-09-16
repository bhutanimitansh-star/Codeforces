

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long x1, y1;
        cin >> x1 >> y1;

        long long x2, y2;
        cin >> x2 >> y2;

        vector<pair<long long, long long>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<long long, long long>> s1, s2;

        // Moves from (x1, y1)
        for (auto m : moves) {
            long long nx = x1 + m.first;
            long long ny = y1 + m.second;
            s1.insert({nx, ny});
        }

        // Moves from (x2, y2)
        for (auto m : moves) {
            long long nx = x2 + m.first;
            long long ny = y2 + m.second;
            s2.insert({nx, ny});
        }

        // Count intersection
        int ans = 0;
        for (auto p : s1) {
            if (s2.count(p)) {
                ans++;
            }
        }

        cout << ans << endl;
    }
}
