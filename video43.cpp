#include <bits/stdc++.h>
using namespace std;

class Human {
    public : 
    string name = "Default" ;
    int color ;
    int weight;
    int health = 8;
    int height ;
    int age ;
    int sleep ;

    public :
    int getHealth(){
        return health ;
    }
    int setWeight(int w){
        this -> weight = w;
    }

};

class Male: public  Human {
    public :
    string colour;

    void sleep (){
        cout << "Male Sleeping" << endl ;
    }
};

int main(){
    Male m1;
    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    cout << m1.health << endl;
    cout << m1.name << endl;
    // cout << object1.color << endl;
    // object1.sleep() ;

  
}
