//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
private:
    float l,w;
public:
    void get(float rl,float rw){
        l=rl;
        w=rw;
    }
    float area(){
        return l*w;
    }
    float perimeter(){
        return 2*(l+w);
    }
};
int main(){
    float a,b;
    Rectangle r1;
    cout<<"enter length:";
    cin>>a;
    cout<<"\nenter width:";
    cin>>b;
    r1.get(a,b);
    cout<<"\narea is:"<<r1.area();
    cout<<"\nperimeter is:"<<r1.perimeter();
}
