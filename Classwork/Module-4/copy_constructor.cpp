#include<iostream>
using namespace std;
class A{
public:
    int x,y;
    A(){
        cout<<"\ndefault constructor";
    }
    A(int a,int b){
        x=a;
        y=b;
    }
    A(const A &old){
        x=old.x;
        y=old.y;
    }
    void print(){
        cout<<"x is:"<<x<<"\ny is:"<<y;
    }
    ~A(){
        cout<<"\nend of program";
    }
};
int main(){
    A obj1(10,20);
    A obj2(obj1);
    obj2.print();
    A obj3;
}
