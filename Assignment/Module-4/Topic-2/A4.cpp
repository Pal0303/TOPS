//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
#define PI 3.14
using namespace std;
class Circle{
private:
    float radius;
public:
    void get(float r){
        radius=r;
    }
    float area(){
        return PI*radius*radius;
    }
    float circumference(){
        return 2*PI*radius;
    }
};
int main(){
    float r1;
    Circle c;
    cout<<"Enter circle radius:";
    cin>>r1;
    c.get(r1);
    cout<<"\narea is:"<<c.area();
    cout<<"\ncircumference is:"<<c.circumference();
}
