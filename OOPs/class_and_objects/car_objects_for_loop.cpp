#include<iostream>
using namespace std;

class car{
    public:
        string brand;
        string model;
        int year;
    void display(){
        cout<<"brand = "<<brand<<endl;
        cout<<"model = "<<model<<endl;
        cout<<"year = "<<year<<endl;
    }   
};
int main(){

    car cars[3];
    cars[0].brand="Toyota";
    cars[0].model="corola";
    cars[0].year=200;

    cars[1].brand="Honda";
    cars[1].model="Civic";
    cars[1].year=2015;

    cars[2].brand="Honda";
    cars[2].model="Honda City";
    cars[2].year=2024;
    for(int i=0; i<3; i++){
        cout<<"car "<<i+1<<endl;
        cars[i].display();
    }

    return 0;
}