#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int arr[5];
     int n = 5;
    cout<<"Enter the elements="<<endl;
    for(int i=0; i<n; i++){
        cout<<"elements"<<i+1<<"="<<endl;
        cin>>arr[i];

        sum+=arr[i];
    }

    
    for(int i=0; i<n; i++){
      cout<<"Elements are="<<arr[i]<<endl;
    }
    cout<<"sum of elements="<<sum<<endl;
    return 0;
} 