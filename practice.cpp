#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    int r,c;
    for(int i=0 ;i<5 ;i ++){
       for(int j = 0; j< 5;j++ ){
        cin >> matrix[i][j];

        if(matrix[i][j] == 1){
            r = i;
            c = j;
        }
       }

        

    }
int distance = abs(r -2) + abs(c-2);

cout << distance << endl;
}