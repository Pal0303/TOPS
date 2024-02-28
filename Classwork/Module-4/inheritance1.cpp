#include<iostream>
using namespace std;
class A{
public:
    int a;
    void funA(){
        cout<<"\nfunction A";
        cout<<"\na:"<<a;
    }
};
class B:public A{
public:
    int b;
    void funB(){
        cout<<"\nfunction B";
        cout<<"\nb:"<<b;
    }
};
int main(){
    B obj;
    obj.a=3;
    obj.b=2;
    obj.funA();
    obj.funB();
    A obj1;
    obj1.a=4;
    obj1.funA();
}
