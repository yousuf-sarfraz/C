#include <iostream>
using namespace std;
#include <climits>;
int main(){
    int marks[]={50,80,78,60,65};
    int size=5;
    
    int smallest= INT_MAX;
    int maximem= INT_MIN;
    int smallestindex=-1;
    int maximemindex=1;

    for(int i=0;i<size;i++)
    {
        if(marks[i]<smallest)
        {
            smallest=marks[i];
            smallestindex=i;
        }
    }
        for(int i=0;i<size;i++)
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