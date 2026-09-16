#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
   
   vector<int> a(n), b(n);
    for(int i= 0; i<n; i++){
        cin >> a[i] >> b[i];
    }
     int ans = INT_MIN;
    for(int i = 0;i<n-1;i++){
        int value = b[i] - a[i+1] + b[i+1];
        ans = max(ans ,value);
    }
    cout << ans << endl;
}
