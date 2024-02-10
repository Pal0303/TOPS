#include<iostream>
using namespace std;
class A{
public:
    A(){
        cout<<"\nconstructor";
    }
    void print(){
        cout<<"\nprint msg";
    }
};
int main(){
    A obj1,obj2;
    obj1.print();
    obj2.print();
    A obj3;
}
