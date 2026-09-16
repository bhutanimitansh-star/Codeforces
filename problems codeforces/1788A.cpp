#include <bits/stc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >> n;
        int count = 0;

        vector<long long>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i =0;i<n;i++){
            if(a[i] == 2){
                cnt ++;
            }
        }
        if(cnt%2 != 0){
            cout << -1 << endl;
            continue;
        }
        if(cnt == 0){
            cout << 1 << endl;
            continue;
         }
        int need = cnt/2;
        int curr = 0;
        int answer = -1;
        for(int i = 0;i<n;i++){
            if(a[i] == 2){
                curr++;
                if(curr == need){
                    answer = i+1;
                    break;
                }
            }
        }
        cout << answer <<  endl;
    }
    return 0;
}