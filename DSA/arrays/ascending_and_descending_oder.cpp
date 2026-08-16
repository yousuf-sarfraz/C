#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarr(int arr[],int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 
int main(){
    int n=10;
    int arr[]={1,3,5,7,0,2,6,9,4,11};
    
    bubblesort(arr, n);
    printarr(arr, n);

    selectionsort(arr,n);
    printarr(arr,n);

    return 0;
}