#include<iostream>
using namespace std;

class employee{
    public:
        string name;
        int employeeid;
        int salary;

        void display(){
            cout<<"name = "<<name<<endl;
            cout<<"employee ID "<<employeeid<<endl;
            cout<<"salary = "<<salary<<endl;
        }
        int increasesalary(){
            return salary=salary+10000;
        }
};
int main(){
    employee e[3];
    e[0].name="Ali";
    e[0].employeeid= 123804;
    e[0].salary=3000;
    e[1].name="Ahmad";
    e[1].employeeid= 894563;
    e[1].salary=40000;
    e[2].name="Abdullah";
    e[2].employeeid= 230429;
    e[2].salary=50000;
    for(int i=0; i<3; i++){
        cout<<" Employee "<<i+1<<endl;
        e[i].display();
        cout << "New salary = " << e[i].increasesalary() << endl;
    }
   
    return 0;

}