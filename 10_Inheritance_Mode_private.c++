#include<iostream>
using namespace std;

class Human{
    private:
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

class Male: public Human{
    public:
        string colour;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }

// ye private karne par super class me sab me work nahi kare ga chiye vo function bala ke karo
};

// class Male: protected Human{
//     public:
//         string colour;

//     void sleep(){
//         cout<<"Male Sleeping"<<endl;
//     }
//     int getHeight(){
//         return this->height;
//     }

//  not able to access out side of class as well inside class
// ye private karne par super class me sab me work nahi kare ga chiye vo function bala ke karo
//ye bhi private bane ga
// };

// class Male: private Human{
//     public:
//         string colour;

//     void sleep(){
//         cout<<"Male Sleeping"<<endl;
//     }
//     int getHeight(){
//         return this->height;
//     }

//  not able to access out side of class as well inside class
// ye private karne par super class me sab me work nahi kare ga chiye vo function bala ke karo
// ye private ban jata ha
// };



int main(){

    Male m1;
    cout<<m1.getHeight()<<endl;

}

