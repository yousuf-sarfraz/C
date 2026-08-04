#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printarray(int arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
void sortearray(int arr[],int n)
{
    for(int i=0; i<n-1 ;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
       
    }
}    
void ascendingarr(int arr[],int n)
{
        for(int i=0; i<n-1 ;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
       
    }
}
void printarraymy(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int main(){
    int n=10;
    int arr[10]={1,3,5,7,9,2,4,8,6,0};
    cout<<"arr=";
    printarray(arr,n);
    cout<<"sortedarr=";
    sortearray(arr,n);
    
    printarraymy(arr,n);
    cout<<"ascendingarr=";
    ascendingarr(arr,n);
    printarray(arr,n);
    return 0;
}