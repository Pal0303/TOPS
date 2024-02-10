#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    char name[50];
    float per;
    void get_data(){
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter per:";
        cin>>per;
    }
    void print_data(){
        cout<<"roll no is:"<<rollno<<"\nname is:"<<name<<"\nper is:"<<per;
    }

};
int main(){
        student obj1,obj2,obj3;
        obj1.get_data();
        obj1.print_data();
        obj2.get_data();
        obj2.print_data();
        obj3.get_data();
        obj3.print_data();

}
