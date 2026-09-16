#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if(x != 1) {
            cout << "YES\n";
            cout << k << "\n";
            for(int i = 0; i < k; i++) {
                cout << 1 << " ";
            }
            cout << "\n";
        }
        else {
            if(n < 2*k) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
                cout << k << "\n";
                for(int i = 0; i < k; i++) {
                    cout << 2 << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
