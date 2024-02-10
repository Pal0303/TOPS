#include<iostream>
using namespace std;
class factorial{
private:
    int n;
public:
    factorial(int num){
        n=num;
    }
    int cal(){
        int i,fact=1;
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
};
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    factorial f(a);
    cout<<"factorial is: "<<f.cal();
}
