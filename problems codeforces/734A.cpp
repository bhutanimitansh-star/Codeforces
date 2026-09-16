#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
string s;
cin >> s;
int A = 0;
for (char c : s){
    if(c == 'A'){
        A ++;
    }
}
int D = n -A;
if (A>D){
    cout << "Anton" ;
}
else if (A < D){
    cout << "Danik" ;
}
else {
    cout <<"    Friendship";
}
return 0;

}