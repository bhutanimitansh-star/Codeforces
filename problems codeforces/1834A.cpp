#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(int i =0;i<n;i++)
            cin >> a[i];

            long long pluscount = 0;
            long long minuscount = 0;
            for(int i = 0;i<n;i++){
                if(a[i] == 1)
                pluscount++;
                else
                minuscount++;
            }
            long long operations = 0;
            while(pluscount<minuscount || minuscount % 2 == 1){
                operations++;
                pluscount++;
                minuscount--;

            }
            cout << operations << endl;
        } 
        return 0;
    }
