#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5];

    cout<<"Enter Elements:\n";
    for(int i=0; i<n; i++){
        cout<<"Element:"<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"Elements Are=";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}