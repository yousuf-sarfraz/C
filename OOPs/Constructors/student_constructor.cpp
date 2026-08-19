#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int age;
        int marks;
        student()
        {
            name="unknown";
            age=0;
            marks=0;
        }
        student(string n, int a)
        {
            name=n;
            age=a;
            marks=0;

        }
        student(string n,int a,int m)
        {
            name=n;
            age=a;
            marks=m;
        }
        void display()
        {
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Marks = "<<marks<<endl;
        }
};
int main(){
    student s1;
    student s2("Ali",18);
    student s3("Zuhran",18,70);
    
    s1.display();
    s2.display();
    s3.display();
    return 0;
}