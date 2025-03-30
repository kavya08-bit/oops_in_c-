#include<iostream>
using namespace std;

class Human{
    protected:
        int weight;
    public:
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

//     int getHeight(){
//         return this->height;
//     }

// // ye protected bane ga
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
// //ye bhi protected bane ga
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
// ye private ban jata ha
};



int main(){

    Male m1;
    cout<<m1.getHeight()<<endl;

}

