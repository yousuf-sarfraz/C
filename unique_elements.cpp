#include<iostream>
using namespace std;

void uniqueelements(int arr[],int n)
{

    for(int i=0; i<n; i++)
    {
        int element=0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                element++;
            }

        }
        if(element==1){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
 int n=9;
 int arr[9]={1,3,4,3,4,5,7,8,5};

 uniqueelements(arr,n);

 return 0;
}