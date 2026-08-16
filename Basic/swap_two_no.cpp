#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=25;
    cout<<"before swap number1="<<a<<endl<<"before swap number2 ="<<b<<endl;

    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"after swap number1="<<a<<endl<<"after swap number2="<<b<<endl;
        
    return 0;
}