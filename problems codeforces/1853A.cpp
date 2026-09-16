#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <long long > a(n);
        for(int i = 0; i< n-1;i++){
            if(a[i] == a[i+1] || a[i+1] - a[i] < 0){
                cout << 1;
                return 0;
            }
        }
        long long minDiff =  LLONG_MAX;
        int index = -1;
        for(int i =0;i<n-1;i++){
            long long diff = a[i+1] - a[i];
            if(diff < minDiff){
                minDiff = diff;
                index  = i;
            }
        } 
        long long operations = minDiff / 2 + 1;

    cout << operations;
    
    }
return 0;
}