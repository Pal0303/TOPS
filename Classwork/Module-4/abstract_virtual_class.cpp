#include<iostream>
using namespace std;
class vehicle{
protected:
    virtual void engine()=0;
};
class car{
    public:
    void engine(){
        cout<<"\ncar engine";
    }
};
class truck{
    public:
    void engine(){
        cout<<"\ntruck engine";
    }
};

int main(){
    car c;
    truck t;
    c.engine();
    t.engine();
}
