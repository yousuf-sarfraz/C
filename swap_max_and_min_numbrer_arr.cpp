#include<iostream>
using namespace std;

void swapminmax(int arr[],int n){
        int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[max]<arr[i]){
            max=i;
        }
    }
        int min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[min]>arr[i]){
            min=i;
        }
    }    
    int temp=arr[min];
     arr[min]=arr[max];
     arr[max]=temp;

}
int main(){
    int n=5;
    int arr[5]={2,5,7,9,4};
    cout<<"arr=";
     for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    
    cout<<endl;
    cout<<"swap arr=";
    swapminmax(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    cout<<endl;

    return 0;
}