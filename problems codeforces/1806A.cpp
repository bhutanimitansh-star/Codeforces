#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

       
        if(b > d){
            cout << "-1" << endl;
            continue;
        }

        int count = 0;

       
        while(b < d){
            b++;
            a++;
            count++;
        }

        
        if(a < c){
            cout << "-1" << endl;
            continue;
        }

      
        while(a > c){
            a--;
            count++;
        }

        
        if(a == c && b == d){
            cout << count << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}
