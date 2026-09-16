#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;

    for(int i =0;i<4;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() == 3){
        cout << "1" << endl;
    }
    else if(s.size() == 2){
        cout << "2" << endl;
    }
    else if (s.size() == 1){
        cout << " 3" << endl;
    }
    else {
        cout << "0" << endl;
    }
}