#include <bits/stdc++.h>
using namespace std;

class Hero {
public:
    int health;
    char level;
    char *name;
    static int timeToComplete;
    // Default Constructor
    Hero() {
        name = new char[100];  // allocate memory
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor (1 parameter)
    Hero(int health) {
        this->health = health;
        name = new char[100];
        cout << "Single parameter constructor called" << endl;
    }

    // Parameterized Constructor (2 parameters)
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        name = new char[100];
        cout << "Two parameter constructor called" << endl;
    }
    Hero(Hero& temp){
        char*ch = new char[strlen(temp.name) +1];
        strcpy(ch,temp.name);
        this->name = ch;
    }

    void print() {
        cout << endl;
        cout << "{ Name: " << this->name << " , ";
        cout << "Health: " << this->health << " , ";
        cout << "Level: " << this->level << " }" << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setHealth(int h) {
        health = h;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
    static int random(){
       return timeToComplete ;
    }

    // Destructor (to free memory)
    // ~Hero() {
        // delete[] name;
        // cout << "Destructor called" << endl;
    // }
    ~Hero(){
        cout << " Desturctor bhai called" << endl;
    }
};

int Hero::timeToComplete = 5;
int main(){

    cout << Hero :: random() << endl ;

    //Satic
   // Hero a;

    //Dynamic
   // Hero*b = new Hero();
    //manually bnana padega
   // delete b;//
}
/*
int main() {
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    // us edefault copy construcor 
    Hero hero2(hero1);
    hero2.print();
    // Hero hero2 = hero1;
    hero1.name[0] ='G';
    hero1.print();

    hero2.print();
}
    */
