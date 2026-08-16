#include <iostream>
using namespace std;
#include <climits>
int main(){
    int marks[]={50,80,78,60,65};
    int size=5;
    
    int smallest=marks[0];
    int maximem=marks[0];
    int smallestindex=0;
    int maximemindex=0;

    for(int i=1;i<size;i++)
    {
        if(marks[i]<smallest)
        {
            smallest=marks[i];
            smallestindex=i;
        }
    }
        for(int i=1;i<size;i++)
    {
        if(marks[i]>maximem)
        {
            maximem=marks[i];
            maximemindex=i;
        }
    }
    cout<<"smallest="<<smallest<<endl;
    cout<<"smallestindex="<<smallestindex<<endl;
    cout<<"maximem="<<maximem<<endl;
    cout<<"maximindex="<<maximemindex<<endl;
    return 0;
} 