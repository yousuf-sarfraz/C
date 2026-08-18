#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int rollnumber;
        int marks1;
        int marks2;
        int marks3;

        int totalmarks(){
            return marks1+marks2+marks3;
        }
        double averagemarks(){
            return  (marks1+marks2+marks3)/3.0;
        }
        string grade(double averagemarks){
            if(averagemarks>=90){
                return "A+";
            }
            else if (averagemarks>=80){
                return "A";
            }
              else if (averagemarks>=70){
                return "b";
            }
              else if (averagemarks>=60){
                return "c";
            }
              else if (averagemarks>=50){
                return "d";
            }
              else
                return "f";

        }
        void display(){
            cout<<"name = "<<name<<endl;
            cout<<"rollnumber = "<<rollnumber<<endl;
            cout<<"marks 1 = "<<marks1<<endl;
            cout<<"marks 2 = "<<marks2<<endl;
            cout<<"marks 3 = "<<marks3<<endl;
        }
};
int main(){
    student s[5];

    s[0].name="Ali";
    s[0].rollnumber=13;
    s[0].marks1=50;
    s[0].marks2=60;
    s[0].marks3=90;

    s[1].name="rayan";
    s[1].rollnumber=18;
    s[1].marks1=89;
    s[1].marks2=79;
    s[1].marks3=90;

    s[2].name="Ishaq";
    s[2].rollnumber=23;
    s[2].marks1=40;
    s[2].marks2=70;
    s[2].marks3=50;

    s[3].name="zuhran";
    s[3].rollnumber=3;
    s[3].marks1=70;
    s[3].marks2=50;
    s[3].marks3=92;

    s[4].name="ahmad";
    s[4].rollnumber=2;
    s[4].marks1=90;
    s[4].marks2=65;
    s[4].marks3=67;
    for(int i=0; i<5; i++){
        cout<<"student "<<i+1<<endl;
        s[i].display();
        cout<<"total marks = "<<s[i].totalmarks()<<endl;
        
        cout<<"Average marks = "<<s[i].averagemarks()<<endl;
        
        cout<<"Grade = "<<s[i].grade(s[i].averagemarks())<<endl;
    
    }
    
    return 0;
}