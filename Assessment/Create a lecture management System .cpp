#include<iostream>
using namespace std;
class lecture{
public:
    string lecturer, subject, course;
    int no_lec,days;
    lecture(){
        cout<<"\nenter lecturer name:";
        cin>>lecturer;
        cout<<"\nenter subject name:";
        cin>>subject;
        cout<<"\nenter course name:";
        cin>>course;
        cout<<"\nenter number of lectures:";
        cin>>no_lec;
    }
    void lec_detail(){
        cout<<"\nhow many days in a week lecture will be conducted:";
        cin>>days;
    }
    void display(){
        cout<<"\nlecturer name:"<<lecturer<<"\nsubject name"<<subject<<"\ncourse name"<<course<<"\nno of lecture"<<no_lec<<"\ndays in a week lecture will be conducted:"<<days;
    }
};
int main(){
    lecture l;
    l.lec_detail();
    l.display();
}
