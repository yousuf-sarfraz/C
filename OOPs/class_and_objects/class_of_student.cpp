#include<iostream>
using namespace std;

class student{
public:
    string name;
    int rollnum;
    int marks;

    void display(){
        cout<<"name = "<<name<<endl;
        cout<<"rollnum = "<<rollnum<<endl;
        cout<<"marks = "<<marks<<endl;

    }
};
int main(){  
    student s1;

    cout<<"student 1"<<endl;
    s1.name="Ali"; 
    s1.rollnum=25;
    s1.marks=78;
    s1.display();

    student s2;

    cout<<"student 2"<<endl;
    s2.name="Ahamd"; 
    s2.rollnum=15;
    s2.marks=89;
    s2.display();

    return 0;


}