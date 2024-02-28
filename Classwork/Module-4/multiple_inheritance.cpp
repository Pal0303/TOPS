#include<iostream>
using namespace std;
class student{
protected:
    int rollno, math,sci,eng;
    string name;
    public:
    void get(int rno,int m,int s,int e,string n){
        rollno=rno;
        math=m;
        sci=s;
        eng=e;
        name=n;
    }
};
class activity{
    protected:
    int sports,music;
    public:
    void get_act(int s,int mu){
        sports=s;
        music=mu;
    }
};
class cal:public student,public activity{
    private:
        int total;
    public:
        int calcu(){
            total=sci+math+eng+sports+music;
            return total;
    }
};
int main(){
    cal c;
    c.get(1,50,50,50,"pal");
    c.get_act(50,50);
    cout<<"total is:"<<c.calcu();
}

