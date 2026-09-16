#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s;
    cin >> s;
    string r;
    cin >> r;
    int i = 0;int e = s.length()-1;
    while(i<e){
        swap(s[i],s[e]);
        i++;
        e--;
    }
    if(s == r){
        cout << "YES" << endl;
    }  
    else{
        cout << "NO" << endl;
    }
}