#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <long long> a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        long long sumEven = 0 , sumOdd = 0;
        vector<int>b;
        vector<int>c;
        for(int i =0;i<n;i++){
            if(a[i]%2 == 0){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }  
            int sumEven =+ b[i];
            int sumOdd =+ c[i];  
        }
        if(sumEven %2 == 0 && sumOdd%2 == 0){
            cout << "YES" << endl;
        }
        else if (sumEven%2 !=0 && sumOdd %2 != 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}