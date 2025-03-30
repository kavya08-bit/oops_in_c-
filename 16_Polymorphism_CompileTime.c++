//function overloading
// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void sayHello(){
//         cout<<"Hello Kavya"<<endl;
//     }
//     void sayHello(string name){
//         cout<<"Hello Kavya"<<name<<endl;
//     }
//     int sayHello(string name,int n){
//         cout<<"Hello Kavya"<<name<<endl;
//         return n;
//     }

// };

// int main(){

//     A obj;
//     obj.sayHello(); 


// }

//operator overloading

#include<iostream>
using namespace std;

class A {
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+(A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output " <<value2 - value1<<endl;

    }
};

int main(){

    A obj1,obj2;
    obj1.a = 1;
    obj2.a = 2;
    obj1+obj2;


}