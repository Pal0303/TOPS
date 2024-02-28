#include<iostream>
using namespace std;
class shape{
protected:
    virtual void area()=0;
};
class circle{
    public:
    float r;
    void area(){
        cout<<"\nenter radius of circle:";
        cin>>r;
        cout<<"area of circle:"<<3.14*r*r;
    }
};
class rect{
    public:
    float h,w;
    void area(){
        cout<<"\nenter height of rectangle:";
        cin>>h;
        cout<<"enter width of rectangle:";
        cin>>w;
        cout<<"area of rectangle:"<<h*w;
    }
};
class square{
    public:
    float l;
    void area(){
        cout<<"\nenter length of square:";
        cin>>l;
        cout<<"area of square:"<<l*l;
    }
};

int main(){
    circle c;
    rect r;
    square s;
    c.area();
    r.area();
    s.area();
}
