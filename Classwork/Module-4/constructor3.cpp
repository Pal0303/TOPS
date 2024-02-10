#include<iostream>
using namespace std;
class interest{
private:
    float p,r,n;
public:
    interest(float pp,float rr,float nn){
        p=pp;
        r=rr;
        n=nn;
    }
    float cal(){
        float si=(p*r*n)/100;
        return si;
    }
};
int main(){
    float x,y,z;
    cout<<"enter principal amount:";
    cin>>x;
    cout<<"enter rate:";
    cin>>y;
    cout<<"enter duration:";
    cin>>z;
    interest i(x,y,z);
    cout<<"simple interest:"<<i.cal();
}
