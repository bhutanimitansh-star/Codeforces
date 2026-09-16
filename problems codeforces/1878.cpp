

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                cnt++;
            }
        }
        if(cnt >= 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    
    }

    return 0;
}
