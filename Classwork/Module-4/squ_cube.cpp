#include<iostream>
using namespace std;
class value{
   private:
    int a;
   public:
    void get(int x){
        a=x;
    }
    int square(){
        return a*a;
    }
    int cube(){
        return a*a*a;
    }
};
int main(){
    int b;
    value obj;
    cout<<"enter a number:";
    cin>>b;
    obj.get(b);
    cout<<"square is:"<<obj.square()<<"\ncube is:"<<obj.cube();
}
