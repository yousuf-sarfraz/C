#include<iostream>
using namespace std;

class book{
    public:
       string name;
       string author;
       int price;
       book(string name,string author, int price)
       {
        this->name = name;
        this->author = author;
        this->price = price;
       }
       void display()
       {
        cout<<"name = "<<name<<endl;
        cout<<"Author = "<<author<<endl;
        cout<<"price = "<<price<<endl;
       }
       
};
int main(){
    book b1("English","Ali",200);
    b1.display();
    return 0;
}