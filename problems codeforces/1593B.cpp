#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ans = 1e9;

        vector<string> targets = {"00", "25", "50", "75"};

        for(auto &tgt : targets){
            int cnt = 0;
            int pos = -1;

          
            for(int i = n - 1; i >= 0; i--){
                if(s[i] == tgt[1]){
                    pos = i;
                    break;
                }
            }
            if(pos == -1) continue;

           
            for(int i = pos - 1; i >= 0; i--){
                if(s[i] == tgt[0]){
                    cnt = (n - 1 - pos) + (pos - 1 - i);
                    ans = min(ans, cnt);
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
