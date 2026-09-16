#include <bits/stdc++.h>
using namespace std;

char getMaxOccCharacter(string s) {
    int arr[26] = {0};

    // Count frequency of each lowercase or uppercase letter
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') {
            arr[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            arr[ch - 'A']++;
        }
    }

    // Find the character with maximum frequency
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
            ans = i;
        }
    }

    return 'a' + ans;  // returning in lowercase form
}


char toLowercase(char ch){
    if (ch >= 'a' && ch <= 'z')
        return ch;
    
    else{
        char temp = ch-'A' +'a' ;
        return temp;
    }
}


bool checkPalindrome(char a[], int n ){

    int s = 0;
    int e = n-1;

    while (s<=e){

        if (a[s]!= a[e] ){
            return 0 ;
        }else{
            s++;
            e--;
        }
    }
    return 1;

}



void Reverse(char name[], int n){ 
    int s = 0;
    int e = n - 1;
    while (s < e){
        swap(name[s++], name[e--]);
    } 
}

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++){   // ✅ fixed null terminator
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cin >> name;
    
    cout << "Original: " << name << endl;

    int len = getLength(name);
    Reverse(name, len);   // ✅ reverse in place

    cout << "pailendrome or not " << checkPalindrome(name,len) << endl;
    cout << "Reversed: " << name << endl;
    cout << "Length: " << len << endl;
    cout << "lowercase" << toLowercase('b') << endl;
     cout << "lowercase" << toLowercase('C') << endl;
    return 0;
}
