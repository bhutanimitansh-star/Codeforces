#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % 2 != 0 && (b - a) >= 1) {
            cout << "Second\n";
        }
        else if (c % 2 == 0 && (b - a) >= 0) {
            cout << "Second\n";
        }
        else {
            cout << "First\n";
        }
    }
    return 0;
}
