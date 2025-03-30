#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void bark(){
            cout<<"Barking"<<endl;
        }
};

class Human{
    public:
        string colour;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

// multiple Inheritance
class Hybrid:public Animal,public Human{

};

int main(){

    Hybrid h;
    h.speak();
    h.bark();
}