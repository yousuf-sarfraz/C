#include<iostream>
using namespace std;

int main(){
    int a=10;
    int& ref=a;
    
    cout<<"before refrence\n";
    cout<<"a = "<<a<<'\n';
    cout<<"reference ="<< ref <<"\n";

    ref=22;
     cout<<"after applying refrence\n ";
    cout<<"refrence ="<<ref<<"\n";
    cout<<" a = "<<a<<'\n';
    return 0;
}