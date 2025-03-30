#include<iostream>
using namespace std;

class A{
    public:
        void Func(){
            cout<<"I am A"<<endl;
        }
};

class B{
    public:
        void Func(){
            cout<<"I am B"<<endl;
        }
};

class c:public A,public B{

};


int main(){
    c obj;
    // obj.Func();
    obj.A::Func();
    obj.B::Func();

}