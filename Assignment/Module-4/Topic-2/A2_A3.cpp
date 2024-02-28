/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
#include<iostream>
using namespace std;
class bank{
private:
    string name,type;
    int ano,balance;
public:
    void get(string n,int no,string ty,int bal){
        ano=no;
        balance=bal;
        name=n;
        type=ty;
    }
    void deposit(int damount){
        balance=balance+damount;
    }
    void withdraw(int wamount){
        if(wamount>balance){
            cout<<"\nNot sufficient amount";
        }
        else{
            balance=balance-wamount;
        }
    }
    void display(){
        cout<<"\nName:"<<name<<"\nBalance:"<<balance;
    }
};
int main(){
    int a,b,e;
    string c,d;
    char choice;
    bank b1;
    cout<<"\nEnter your name:";
    cin>>c;
    cout<<"\nEnter your account no:";
    cin>>a;
    cout<<"\nEnter your account type:";
    cin>>d;
    cout<<"\nEnter balance:";
    cin>>b;
    cout<<"\nEnter amount to withdraw/deposit:";
    cin>>e;
    cout<<"\nEnter your choice(withdraw/deposit):";
    cin>>choice;
    b1.get(c,a,d,b);
    switch(choice){
    case 'w':
        b1.withdraw(e);
        b1.display();
        break;
    case 'd':
        b1.deposit(e);
        b1.display();
        break;
    default:
        cout<<"wrong choice";
        break;
    }
}
