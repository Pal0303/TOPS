#include<iostream>
using namespace std;
class super{
public:
    int x;
    super(int a){
        x=a;
    }
    void printsuper(){
        cout<<"\nx:"<<x;
    }
};
class sub:public super{
public:
    int y,z;
    sub(int b,int c):super(c){
        y=b;
        z=c;
    }
    void printsub(){
        cout<<"\ny:"<<y;
        cout<<"\nz:"<<z;
    }
};
int main(){
    sub s(10,5);
    s.printsuper();
    s.printsub();
}
