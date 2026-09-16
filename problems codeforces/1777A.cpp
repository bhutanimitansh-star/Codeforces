#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>a(n);
        for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << "0" << endl;
        continue;
    }
    int count = 0;
    int i =0;
    while(i<a.size()-1){
        if(a[i]%2 == a[i+1]%2){
           __int128 temp = (__int128)a[i] * a[i+1];
           long long prod;
           if(temp > LLONG_MAX) prod = LLONG_MAX;
           else prod = (long long temp);


            a.erase(a.begin() + i);
            a.erase(a.begin()+i);

            a.insert(a.begin() + i,prod);
            count ++;
        }
        else{
            i++;
        }
    }
    
    cout << count << endl;
  
}
return 0;
}