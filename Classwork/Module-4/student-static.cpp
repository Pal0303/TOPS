#include<iostream>
using namespace std;
class student{
public:
    float per;
    static int pass,fail;
    student(){
        cout<<"enter percentage:";
        cin>>per;
        if(per>36){
            pass++;
        }
        else{
            fail++;
        }
    }
    void print(){
        cout<<"\ntotal pass:"<<pass;
        cout<<"\ntotal fail:"<<fail;
    }
};
int student::pass=0;
int student::fail=0;
int main(){
    student s1,s2,s3,s4,s5;
    s5.print();
}
