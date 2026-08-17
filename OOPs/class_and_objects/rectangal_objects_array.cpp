#include<iostream>
using namespace std;

class rectangle{
 public:
    double length;
    double width;

    
    void area(){
        cout<<"Area = "<<length*width<<endl;
    }
    void perimeter(){
        cout<<"Perimeter = "<< 2*(length+width)<<endl;
    }
    void display(){
        cout<<"length = "<<length<<endl;
        cout<<"width = "<<width<<endl;
    }
};

int main(){
    rectangle r[3];

    r[0].length=8.8;
    r[0].width=4.8;

    r[1].length=10.9;
    r[1].width=15.9;

    r[2].length=20.2;
    r[2].width=2.9;

    for(int i=0; i<3; i++ ){
        cout<<"rectangle "<<i+1<<endl;
        r[i].display();
        r[i].area();
        r[i].perimeter();
    }

    return 0;

}