#include<iostream>
using namespace std;

class car{
    public:
        string brand;
        string model;
        int year;
        car(string brand, string model, int year)
            :brand(brand),model(model),year(year)
        {
        }
        void display()
        {
            cout<<"brand = "<<brand<<endl;
            cout<<"model = "<<model<<endl;
            cout<<"year = "<<year<<endl;
        }

};
int main(){
    car c("Toyota","corolla",2020);
    c.display();
    return 0;
}