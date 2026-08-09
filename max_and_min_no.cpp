#include<iostream>
using namespace std; 

int main(){
    const int n=10;
    int arr[n];

    cout<<"Enter the elements\n";
    for(int i=0; i<n; i++){
        cout<<"element =\n";
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
        int min=arr[0];
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Largest element="<<largest<<endl;
    cout<<"minemum element="<<min<<endl;
    return 0;
}