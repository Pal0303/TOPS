#include<iostream>
using namespace std;
class A{
public:
    static int count;
    static void fun(){
        count++;
        cout<<count;
    }
};
int A::count=0;
int main(){

    /*A obj1,obj2,obj3;
    cout<<"\nobj-1:"<<A::count;
    obj1.count++;
    cout<<"\nobj-1:"<<obj2.count;
    obj2.count++;
    cout<<"\nobj-1:"<<obj3.count;*/

    A obj1;
    A::fun();
    obj1.fun();
}
