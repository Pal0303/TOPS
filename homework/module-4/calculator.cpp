#include<iostream>
using namespace std;
class calc{
    public:
    float ans;
    float add(float a,float b){
        ans=a+b;
        return ans;
    }
    float sub(float a,float b){
        ans=a-b;
        return ans;
    }
    float mul(float a,float b){
        ans=a*b;
        return ans;
    }
    float div(float a,float b){
        ans=a/b;
        return ans;
    }
};

int main(){
    calc c;
    float x,y;
    int choice;
    cout<<"enter first number:";
    cin>>x;
    cout<<"enter second number:";
    cin>>y;
    cout<<"enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
    cin>>choice;
    switch(choice){
        case 1:
           cout<<"sum is:"<<c.add(x,y);
           break;
        case 2:
           cout<<"sub is:"<<c.sub(x,y);
           break;
        case 3:
           cout<<"mul is:"<<c.mul(x,y);
           break;
        case 4:
           cout<<"div is:"<<c.div(x,y);
           break;
        default:
            printf("wrong choice");
            break;
    }
}
