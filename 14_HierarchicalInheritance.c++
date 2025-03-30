#include<iostream>
using namespace std;

class A{
    public:
        void Func1(){
            cout<<"Inside Func1"<<endl;
        }
};

class B:public A{
    public:
        void Func2(){
            cout<<"Inside Func2"<<endl;
        }
};

class c:public A{
    public:
        void Func3(){
            cout<<"Inside Func3"<<endl;
        }
};


int main(){
    A object1;
    object1.Func1();

    B object2;
    object2.Func1();
    object2.Func2();

    c object3;
    object3.Func1();
    object3.Func3();


}