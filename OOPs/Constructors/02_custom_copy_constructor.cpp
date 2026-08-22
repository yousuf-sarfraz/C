#include<iostream>
using namespace std;

class book{
    public:
        string tital;
        int price;
        book(string t, int p) {
        tital = t;
        price = p;
    }
        book(const book &other){
            tital=other.tital;
            price=other.price;
        }
        void display(){
            cout<<"Tital = "<<tital<<endl;
            cout<<"Price = "<<price<<endl;
        }
        
};
int main(){
    book b1("English",300);
    book b2(b1);
    b2.display();
    b2.price=400;
    b2.display();
}