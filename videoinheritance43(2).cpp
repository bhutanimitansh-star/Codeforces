#include <bits/stdc++.h>
using namespace std ;

class Animal{
    public :
    int age;
    int weight ;

    public :
    void speak(){
        cout << "Speaking " << endl ;
    }
};

class Dog : public Animal {

};

class GermanShephered : public Dog{

};

int main(){
GermanShephered g;
g.speak();
cout << g.age << endl ;
}