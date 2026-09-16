#include <bits/stdc++.h>
using namespace std;

int getSum(int * arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}


void update2 (int& n){
    n++;
}
void update1(int n){
    n++;
}
int main(){
    /*
    int i = 5;
    int & j = i;

    cout << i << endl ;
    i++ ;
    cout << i << endl ;
    j++;
    cout << i << endl ;
*/

  /*
int n = 5;

cout << "Before " << n << endl;
update2(n);
cout << "after " << n << endl;

*/



   /*
char ch = 'q';
cout << sizeof(ch) << endl;

char*c = &ch;
cout << sizeof(c) << endl ;

*/

//  variable size array /




  #include <bits/stdc++.h>
using namespace std;



    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "answer is " << ans << endl;  // ✅ FIXED LINE

    delete[] arr;  // optional but good practice
    return 0;
}
