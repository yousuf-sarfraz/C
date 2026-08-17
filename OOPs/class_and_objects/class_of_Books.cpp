#include<iostream>
using namespace std;

class book{
public:
    string title;
    string author;
    double pages;
    int price;

    void display(){
        cout<<"title = "<<title<<endl;
        cout<<"author = "<<author<<endl;
        cout<<"pages = "<<pages<<endl;
        cout<<"price = "<<price<<endl;
    }
};

int main(){
book b1;
    
    b1.title="c++ programming";
    b1.author="David";
    b1.pages=300;
    b1.price=500;
book b2;
    
    b2.title="Python";
    b2.author="John";
    b2.pages=400;
    b2.price=600;
book b3;
    
    b3.title="Data structure";
    b3.author="Mark";
    b3.pages=200;
    b3.price=300;

    cout<<"book 1"<<endl;
    b1.display();
    cout<<"book 2"<<endl;
    b2.display();
    cout<<"book 3"<<endl;
    b3.display();

    return 0;
}