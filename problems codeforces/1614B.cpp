

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(int i = 0;i<n;i++)
            cin >> a[i];
        
        vector<pair<long long,long long>>building_map;
        for(int i = 0;i<n;i++)
            building_map.push_back({a[i],i});
        
            sort(building_map.rbegin(),building_map.rend());

        vector<long long>ans(n+1,0);
        ans[0] = 0;

        long long minutes = 0;
        long long cordinates = 1;

        for(int i = 0;i<n;i++){
            ans[building_map[i].second +1] = cordinates;

            minutes += (2*abs(cordinates)*building_map[i].first);

            if(cordinates < 0)
                cordinates = abs(cordinates) + 1;
            
            else
                cordinates = -cordinates;
            
        }
        cout << minutes << endl;
        for(auto it : ans)
           
            cout << it << " ";
            cout << endl;
        

    } 
}