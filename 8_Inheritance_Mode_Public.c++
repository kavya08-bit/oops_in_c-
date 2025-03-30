#include<iostream>
using namespace std;

class Human{
    public:
        int weight;
        int age;
        int height;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

// class Male: public Human{
//     public:
//         string colour;

//     void sleep(){
//         cout<<"Male Sleeping"<<endl;
//     }

// able to access 
// public bane ga
// };


// class Male: protected Human{
//     public:
//         string colour;

//     void sleep(){
//         cout<<"Male Sleeping"<<endl;
//     }
//     int getHeight(){
//         return this->height;
//     }

// // not able to access out side of class
// // can able to access inside the class so we can make a func to use this outside of class
// ye protected bane ga

// };

class Male: private Human{
    public:
        string colour;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }

// not able to access out side of class
// can able to access inside the class so we can make a func to use this outside of class
//private bane ga
};



int main(){

    Male m1;
    cout<<m1.getHeight()<<endl;



/*
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.colour<<endl;
    object1.setWeight(85);
    cout<<object1.weight<<endl; 
    object1.sleep();
*/


}

