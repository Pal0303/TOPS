#include<iostream>
#include<math.h>
using namespace std;
class cal{
protected:
    int n;
public:
    void get(int num){
        n=num;
    }
};
class square:public cal{
public:
    int squ(){
        return n*n;
    }
};
class cube:public cal{
public:
    int c(){
        return n*n*n;
    }
};
class power:public cal{
protected:
    int e;
public:
    void getp(){
        cout<<"\nenter power:";
        cin>>e;
    }
    int pw(){
        return pow(n,e);
    }
};
int main(){
    square s1;
    cube c1;
    power p1;
    int a;
    cout<<"enter a number:";
    cin>>a;
    s1.get(a);
    c1.get(a);
    p1.get(a);
    p1.getp();
    cout<<"\nsquare is:"<<s1.squ();
    cout<<"\ncube is:"<<c1.c();
    cout<<"\npower is:"<<p1.pw();
}
