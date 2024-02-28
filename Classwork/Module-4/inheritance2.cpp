#include<iostream>
using namespace std;
class student{
protected:
    int rollno;
    char name[10];
    void detail(){
        cout<<"\nenter name:";
        cin>>name;
        cout<<"\nenter rollno:";
        cin>>rollno;
    }
};
class result:public student{
private:
    float per;
public:
    void percentage(){
        detail();
        cout<<"\nenter percetange:";
        cin>>per;
    }
    void display(){
        cout<<"\nroll no:"<<rollno<<"\nname:"<<name<<"\npercentage:"<<per;
    }
};
int main(){
    result r1;
    r1.percentage();
    r1.display();
}
