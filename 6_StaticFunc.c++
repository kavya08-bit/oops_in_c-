#include<iostream>
using namespace std;

class Hero {

    // properties 
    private:
    int health;
    public:
    char *name;
    char level;
    static int  timeToComplete;

    //constructor 
    Hero(){
        cout<<"Constructor called"<<endl;\
        name = new char[100];
    }

    // parameterised constructor
    Hero(int health){
        cout<<"this ->"<<this<<endl;
        this->health = health;
    }

    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }



    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" , ";
        cout<<"Health: "<<this->health<<" , ";
        cout<<"Level: "<<this->level<<" ]";
        cout<<endl;
    }

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
    void setName(char name[]){
        this->name=name;
    }

    // static func
    static int random(){ 
        return timeToComplete;

    }

    // destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

};


int Hero::timeToComplete = 5;

int main(){
    cout<<Hero::random()<<endl;

}