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

        int dotCount = 0;
        bool hasBigSegment = false;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '.'){
                dotCount++;
                cnt++;
                if(cnt >= 3){
                    hasBigSegment = true;
                }
            } else {
                cnt = 0;
            }
        }

        if(dotCount == 0){
            cout << 0 << endl;
        }
        else if(hasBigSegment){
            cout << 2 << endl;
        }
        else{
            cout << dotCount << endl;
        }
    }
}
