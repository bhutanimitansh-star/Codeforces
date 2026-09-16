#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string st;
        cin >> st;

        vector<int> pos;

        for(int i = 0; i < n; i++){
            if(st[i] == '1'){
                pos.push_back(i);
            }
        }

        int count = pos.size();

        // case when no students exist
        if(pos.size() == 0){
            if(n == 1){
                cout << 1 << endl;
            }
            else{
            cout << n/2 << endl;
            }
            continue;
        }

        // left gap
        int left = pos[0];
        count += left / 2;

        // middle gaps
        for(int i = 1; i < pos.size(); i++){
            int d = pos[i] - pos[i-1];

            if(d % 2 == 1){
                count += d / 2;
            }
            else{
                count += (d / 2) - 1;
            }
        }

        // right gap
        int right = n - 1 - pos.back();
        count += right / 2;

        cout << count << endl;
    }

    return 0;
}