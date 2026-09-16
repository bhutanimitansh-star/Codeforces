#include <bits/stdc++.h>
using namespace std ;

int main (){
    string s;
    cin >> s;
    int count = 0;
     for(char c : s){
            if(c>= 'A' && c <='Z'){
                count ++;
            }
        }
    for(int i = 0;i < s.length(); i++){
  
        if(count >= (s.length())/2){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}