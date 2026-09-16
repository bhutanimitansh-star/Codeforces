#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // vector<int>a(n);
    // for(int i=0;i<n;i++)
    //     cin >> a[i];
    
    //     int hash[13] = {0};
    //     for(int i =0;i<n;i++){
    //         hash[a[i]] += 1;
    //     }
    // int q;
    // cin >> q;
    // while(q--){
    //     int number;
    //     cin >> n;
    // }
    string st;
    cin >> st;

    int hash[256] = {0};
    for(int i =0;i<st.size();i++){
        hash[st[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        cout << hash[ch] << endl;
        
    }
    return 0;
}