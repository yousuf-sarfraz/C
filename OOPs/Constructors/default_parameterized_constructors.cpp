#include<iostream>
using namespace std;

class books{
    public:
        string title;
        string author;
        int price;

        books(){
             title= "Unknown";
             author= "Unknown";
             price= 0;
        }
        books(string t, string a){
            title=t;
            author=a;
            price=0;
        }
        books(string t, string a, int p){
            title=t;
            author=a;
            price=p;
        }
        void display(){
            cout<<"Title = "<<title<<endl;
            cout<<"Author = "<<author<<endl;
            cout<<"Price = "<<price<<endl;
        }


};
int main(){
    books b1;
    books b2("Python","mark");
    books b3("Math", "divid", 100);

    b1.display();
    b2.display();
    b3.display();
    
    return 0;
}