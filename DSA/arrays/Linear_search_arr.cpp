#include <iostream>
using namespace std;

void linearsearch(int arr[],int n)
{   int target=5;       
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
          cout<<"element found index = "<<i<<endl;
          cout<<"found element = "<<arr[i]<<endl;
          return;
        }
    }

        cout<<"element not fount"<<endl;
}

int main()
{
    int n=5;
    int arr[5]={1,4,6,8,5};

    linearsearch(arr,n);

    return 0;
}