







#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string st;
        cin >> st;

        int count0 = 0;
        int count1 = 0;
        int n = st.size();
        for(char c: st){
            if(c == '0')count0++;
            else if(c == '1')count1++;
    }
    int length_of_t = 0;

    for(int i = 0;i<n;i++){
        if(st[i] == '0' && count1 > 0){
            count1--;
            length_of_t++;
        }
        else if(st[i] == '1' && count0 > 0){
            count0--;
            length_of_t++;
        }
        else{
            break;
        }
    }
    cout << n-length_of_t << endl;
 
}
return 0;
}