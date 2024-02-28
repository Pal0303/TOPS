//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person{
private:
    string name,country;
    int age;
public:
    void set(){
        cout<<"enter name:";
        cin>>name;
        cout<<"enter country:";
        cin>>country;
        cout<<"enter age:";
        cin>>age;
    }
    void get(){
        cout<<"name:"<<name<<"\ncountry:"<<country<<"\nage:"<<age;
    }
};
int main(){
    Person p;
    p.set();
    p.get();
}
