#include<iostream>
using namespace std;

void myname( string &myname){
     myname="Ali";
}
void age(int &n){
    n=20;
}
int main(){
    int a=18;
    string name="Ibrahim";

    cout<<"you name= "<<name<<"\n";
    cout<<"age= "<<a<<"\n";

    myname(name);
    cout<<"my name= "<<name<<"\n";

    age(a);
    cout<<"age= "<<a<<'\n';

    return 0;

}