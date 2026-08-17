#include<iostream>
using namespace std;

class car{
public:
    string brand;
    string model;
    double year;

    void display(){
        cout<<"brand = "<<brand<<endl;
        cout<<"model = "<<model<<endl;
        cout<<"year = "<<year<<endl;
    }
};
int main(){
    car c1;
    car c2;
    c1.brand="Toyota";
    c1.model=" Corolla";
    c1.year=2016;
    c2.brand="Honda";
    c2.model="Civic";
    c2.year=2026;
    cout<<"car2 \n";
    c2.display();
    cout<<"car1 \n";
    c1.display();
    return 0;
}