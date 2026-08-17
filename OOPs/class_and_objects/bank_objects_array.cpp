#include<iostream>
using namespace std;

class account{
    public:
        int accountNumber;
        string holderName;
        int balance;
        void deposit(int amount){
             cout<<"initial balance = "<<balance<<endl;
             balance=balance+amount;
             cout<<"new blance = "<<balance<<endl;
             
        }

        void withdraw(int amount){
              if(balance<amount){
                cout<<"balance is less than withdraw amount"<<endl;
            } else{
            balance=balance-amount;}
            cout<<"initial balance = "<<balance<<endl;        
           
            cout<<"new blance = "<<balance<<endl;
        }

        void display(){
            cout<<"account Number = "<<accountNumber<<endl;
            cout<<"holderName = "<<holderName<<endl;
            cout<<"balance = "<<balance<<endl;
        }
};
int main(){
    account a[3];

    a[0].accountNumber=302210582;
    a[0].holderName="Hasnain";
    a[0].balance=10000;
    
    a[1].accountNumber=304567892;
    a[1].holderName="Ishaq";
    a[1].balance=15000;
    a[2].accountNumber=345678922;
    a[2].holderName="zuhran";
    a[2].balance=50000;

    for(int i=0; i<3; i++){
        cout<<"Account "<<i+1<<endl;
        a[i].display();
        a[i].deposit(2000);
        a[i].withdraw(15000);
    }
     cout <<endl;
    return 0;
}