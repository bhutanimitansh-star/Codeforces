#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n ,k ;
        cin >> n >> k;

        vector <long long > arr(n);
        for(int i = 0; i<n;i++){
            cin >> arr[i];
        }
        if(n == k){
            cout << "YES" << endl;}
        else if( k == 1 ){
            bool sorted = true;
            for(int i = 0; i<n-1;i++){
                if(arr[i] >arr[i+1]){
                    sorted = false;
                    break;
                }
            }
            if(sorted)
                cout << "YES\n";
            else
                cout << "NO\n";
            
            }
       else{

        cout <<"YES" << endl;
       }

        }
         return 0;
        }
    
