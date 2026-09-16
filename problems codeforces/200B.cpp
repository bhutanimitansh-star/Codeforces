

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double>arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    double sum = 0.0;
    for(int i = 0;i<n;i++){
      
       sum += arr[i]/100.0;
    }
    double result = (sum/n)*100.0;
    cout << fixed << setprecision(6) <<  result << endl;
    return 0;
}