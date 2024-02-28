#include<iostream>
using namespace std;
class employee{
protected:
    int id,salary;
    char name[10];
    void get(){
        cout<<"\nenter name:";
        cin>>name;
        cout<<"\nenter employee id:";
        cin>>id;
        cout<<"\nenter salary:";
        cin>>salary;
    }
};
class employee_salary:public employee{
public:
    int gross,pf;
    void cal_salary(){
        get();
        pf=(salary/10);
        gross=(salary-pf)-2500;

    }
    void print(){
        cout<<"\nemployee id:"<<id<<"\nname:"<<name<<"\nbasic salary:"<<salary<<"\ngross salary:"<<gross;
    }
};
int main(){
    employee_salary e1;
    e1.cal_salary();
    e1.print();
}
