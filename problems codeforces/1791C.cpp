#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        string s;
        cin >> s;

        while(s.size() >=2 && s.front() != s.back()){
                s = s.substr(1,s.size() -2);
            }
            cout << s.size() << endl;
        }
        
        return 0;
    }