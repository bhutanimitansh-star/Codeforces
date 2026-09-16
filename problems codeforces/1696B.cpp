#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int count = 0;
        for(int i =0;i<n;i++){
            if(a[i] == 0){
                count ++;
            }
        }
        bool found = false;
        int left = 0;
        int right = n-1;
        while(a[left] == 0)
        left ++;

        while (a[right] == 0)
        right--;

        for(int i = left;i<= right;i++){
            if(a[i] == 0)
            found = true;
        }


        if(count == n)
            cout << 0 << endl;
        
        else if(found == false)
        cout << 1 << endl;

        else
        cout << 2 << endl;
    }
    return 0;
}