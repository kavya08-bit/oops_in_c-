#include<iostream>
using namespace std;

class Hero {

    // properties 
    private:
    int health;
    public:
    char *name;
    char level;

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

    // copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;


        cout<<"COpy Constructor Called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
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

};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('d');
    char name[7] = "Babber";
    hero1.setName(name);
    hero1.print();

// use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'g';
    hero1.print();

    hero2.print();


    // Hero S(70,'c');
    // S.print();

    // // copy constructor
    // Hero R(S); 
    // R.print();



    // Hero a(10);
    // cout<<"address of ramesh"<<&a<<endl;
    // a.setLevel('B');
    // a.setHealth(80);
    // cout<<"health is: "<<a.getHealth()<<endl;
    // cout<<"level is: "<<a.level<<endl;

}