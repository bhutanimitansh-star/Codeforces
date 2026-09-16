#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

  while(t--){
    int n,x;
    cin >> n >> x;

    vector<long long > a(n); 
    for(int i = 0;i<n;i++){
        cin >> a[i];}


    if(n == 1){
        cout << max(a[0], 2*(x - a[0])) << endl;
    }
   else{
    long long ans = a[0];
    for(int i = 0;i<n-1;i++){
        ans = max(ans,a[i+1]-a[i]);
    }
    ans = max(ans,2*(x-a[n-1]));
    cout << ans << endl;
   }
  }
  return 0;
  }
