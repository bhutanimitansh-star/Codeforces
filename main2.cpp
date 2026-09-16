// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

// int32_t main() {
//     fast_io;

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     string s ; cin >> s ; 
//     for(int i = 0 ; i < s.size(); i++){
//         if(s[i] == '#'){

//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v){
    bool small = true ;
    int left = 0 ; 
    int right = v.size() - 1 ;
    for(int i = 0 ; i < v.size(); i++){
        if(small == true){
            int x = min(v[left], v[right] ) ; 
            if( x == v[left]){
                cout << "L" ; 
                left ++ ; 
            }else{
                cout << "R" ;
                right -- ;  
            }
            small = false ; 
        }else{
            int y = max(v[left], v[right]) ; 
             if( y == v[left]){
                cout << "L" ; 
                left ++ ; 
            }else{
                cout << "R" ;
                right -- ;  
            }
            small = true ; 
        }
    }
    cout << endl ; 
}

int main() {
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t ; cin >> t ; 
    while (t--)
    {
        int n ; cin >> n ; 
        vector<int> v ; 
        for(int i = 0 ; i < n ; i ++){
            int x ; cin >> x ; 
            v.push_back(x); 
        } 
        solve(v); 

    }
    
}
