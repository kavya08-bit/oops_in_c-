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

    // creating of object
    Hero h1;
    cout<<"health is: "<<h1.getHealth()<<endl;
    //use setter
    h1.setHealth(70);
    h1.level = 'A';
    // cout<<"size: "<<sizeof(h1)<<endl;
    cout<<"health is: "<<h1.getHealth()<<endl;
    cout<<"level is: "<<h1.level<<endl;

}