#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>p(n),ans(n);
    for(int i= 0;i<=n;i++){
        cin >>p[i];
    }
    for(int i = 0;i<n;i++){
        int giver = p[i];
        ans[giver -1] = i+1;
    }
    for(int i = 0;i<n;i++){
        cout << ans[i] << " ";

    }
    return 0;

}