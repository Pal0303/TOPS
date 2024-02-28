#include<iostream>
using namespace std;
class A{
public:
    int sum(int a,int b){
        return a+b;
    }
    float sum(float a,float b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
    A obj;
    cout<<"\n"<<obj.sum(3,4);
    cout<<"\n"<<obj.sum(3,4,4);
    cout<<"\n"<<obj.sum(0.2,0.2);
}
