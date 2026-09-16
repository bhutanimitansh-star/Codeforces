

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i<n;i++){
            cin >> a[i];
        }
        bool all_same = true;
        for(int i=1;i<n;i++){
            if(a[i] != a[0]){
                all_same = false;
                break;
            }
        }
        if(all_same){
            cout << "NO" << endl;
            continue;
        }

         sort(a.begin(),a.end());
         long long max = a[n-1];
         long long min = a[0];
       if(max == min){
        cout << "NO" << endl;
       }
        else{
            cout << "YES" << endl;
            cout << max << " ";
            for(int i = 0;i<n-1;i++)
            cout << a[i] << " ";
            cout << endl;

         }

    }
    
      return 0;  
}
