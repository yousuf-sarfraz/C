#include<iostream>
using namespace std;

class book{
    public:
        string tital;
        int price;
        book(string tital,int price)
            :tital(tital),price(price)
            {             
            }
        void display(){
            cout<<"Tital = "<<tital<<endl;
            cout<<"Price = "<<price<<endl;
        }
};
int main(){
    book b1("English",250);
    book b2(b1);
    b2.display();
}