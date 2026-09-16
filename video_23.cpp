#include <bits/stdc++.h>
using namespace std;

void printColSum(int arr[3][3],int row,int col){
    cout <<"Printing Sum " << endl;
    for(int col=0;col<3;col++){
        int sum = 0;
        for (int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout <<sum << " " ;
    }
    cout << endl;
}

// printing sum row wise //
void printSum(int arr[3][3],int row,int col){
    cout <<"Printing Sum " << endl;
    for(int row=0;row<3;row++){
        int sum = 0;
        for (int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout <<sum << " " ;
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row,int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row=0;row<3;row++){
        int sum = 0;
        for (int col = 0;col<3; col++){
            sum += arr[row][col];
        }
        if (sum>maxi)
        {
          maxi = sum ;
          rowIndex = row;
        }
        
    }
    cout << "the maximium sum is " << maxi << endl;
    return rowIndex ;
}



bool isPresent(int arr[][3], int target, int row , int col){
    for(int row=0; row<3;row++){
        for (int col = 0; col < 3; col++){
            if(arr[row][col]== target){
                return 1;
            }
        }
       
        
    }
    return 0 ;
}

int main(){
    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[j][i];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j];
            if (j < 3) cout << " ";  // print space between elements in a row
        }
        cout << "\n";  // newline after each row
    }
    int target;
    cin  >> target ;

        if(isPresent(arr,target,3,3)){
            cout << "Element Found" << endl;

        }
        else{
            cout << "No found" << endl;
        }
        // printSum(arr,3,3);
        // printColSum(arr,3,3);
        largestRowSum(arr,3,3);
        cout << "largest sum at the index is " <<  largestRowSum << endl;
    return 0;

}
