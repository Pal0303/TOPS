//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
private:
    float a,b;
public:
    void get(float n1,float n2){
        a=n1;
        b=n2;
    }
    float sum(){
        return a+b;
    }
    float sub(){
        return a-b;
    }
    float mul(){
        return a*b;
    }
    float div(){
        return a/b;
    }
};
int main(){
    calculator c;
    float x,y;
    int choice;
    cout<<"enter first number:";
    cin>>x;
    cout<<"\nenter second number:";
    cin>>y;
    cout<<"\nenter choice:\n1.Sum\n2.Sub\n3.Mul\n4.Div\n";
    cin>>choice;
    c.get(x,y);
    switch(choice){
        case 1:
           cout<<"sum is:"<<c.sum();
           break;

        case 2:
           cout<<"sub is:"<<c.sub();
           break;

        case 3:
           cout<<"mul is:"<<c.mul();
           break;

        case 4:
           cout<<"div is:"<<c.div();
           break;

        default:
           cout<<"wrong choice";
           break;
    }
}
