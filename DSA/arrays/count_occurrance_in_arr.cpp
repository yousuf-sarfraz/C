#include <iostream>
using namespace std;

int main(){

    int n=10;
    int arr[]={1,2,1,3,4,1,2,4,5,9};
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }
    }
    cout<<"number 1 appear "<<count<<" times";
    cout<<endl;
    return 0;
}