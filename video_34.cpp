#include <bits/stdc++.h>
using namespace std ;
void reverseString( string & str,int i, int j){

    if(i >= j)
    return ;

    swap(str[i],str[j]);
    i++;
    j--;
    
reverseString(str,i,j);
}

int main(){
string name = "shreyam " ;

reverseString(name,0,name.length()-1 );
cout << name << endl;
return 0;
}