#include<iostream>
using namespace std;

class Hero {

    // properties 
    private:
    int health;
    public:
    char level;

    // using getter and setter
    int getHealth(){
        return health;
    }
    
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){
    //static allocation
    Hero a;
    a.setLevel('B');
    a.setHealth(80);
    cout<<"health is: "<<a.getHealth()<<endl;
    cout<<"level is: "<<a.level<<endl;

    // dynamically allocation
    Hero *b = new Hero;
    b->setLevel('B');
    b->setHealth(80);
    cout<<"health is: "<<(*b).getHealth()<<endl;
    cout<<"level is: "<<(*b).level<<endl;

}