

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        char c;
        cin >> n >> c;
        string st;
        cin >> st;

        st += st;

        n *=2;

        long long last_green_index = -1;
        long long max_time = INT_MIN;

        for(int i = n-1;i>0;i--){
            if(st[i] == 'g'){
                last_green_index = i;
            }

            if(st[i] == c){
                long long difference = last_green_index-i;
                max_time = max(max_time,difference);
            }
        }
        cout << max_time << endl;

    }
    return 0;
}