#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long zeros = 0, ones = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 0) zeros++;
            if(a[i] == 1) ones++;
        }

        if(ones == 0){
            cout << 0 << endl;
        } else {
            long long answer = ones * (1LL << zeros);
            cout << answer << endl;
        }
    }
    return 0;
}
