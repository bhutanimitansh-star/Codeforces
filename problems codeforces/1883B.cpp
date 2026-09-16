#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;

        // Count frequency
        vector<int> count(26, 0);
        for(char c : st){
            count[c - 'a']++;
        }

        // Count odd frequencies
        int odd = 0;
        for(int i = 0; i < 26; i++){
            if(count[i] % 2 == 1){
                odd++;
            }
        }

        // Check condition
        if(odd <= k + 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
