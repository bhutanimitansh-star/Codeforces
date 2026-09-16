#include<bits/stdc++.h>
using namespace std ;

int main(){
    int row ;
    cin >> row;
    int **arr = new int*[row];

    for(int i = 0; i< row; i++){
        int col ;
        cin >> col;
        arr[i] = new int [col];
        
        for(int j = 0; j<col;j++){
            cin >> arr[i][j];
        }
    }
    cout << "\nJagged Array:\n";
    for (int i = 0; i < row; i++) {
        int col; 
}
 for (int i = 0; i < row; i++) delete[] arr[i];
    delete[] arr;
}
  