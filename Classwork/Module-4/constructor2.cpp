#include<iostream>
using namespace std;
class employee{
public:
    int eno;
    char name[10],email[10];
    employee(){
        cout<<"enter employee no:";
        cin>>eno;
        cout<<"\nenter name:";
        cin>>name;
        cout<<"\nenter email address:";
        cin>>email;
    }
    void print(){
        cout<<"employee no is:"<<eno<<"\tname is:"<<name<<"\temail address:"<<email;
    }
};
int main(){
    employee e1;
    e1.print();
}
