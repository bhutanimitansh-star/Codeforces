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

        map<long long, long long> freq;
        for(long long x : a){
            freq[x]++;
        }

        if(freq.size() >= 3){
            cout << "NO\n";
            continue;
        }

        if(freq.size() == 1){
            cout << "YES\n";
            continue;
        }

        long long freq1 = freq.begin()->second;
        long long freq2 = freq.rbegin()->second;

        if(abs(freq1 - freq2) <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
