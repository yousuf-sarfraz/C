#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generaterandom(int arr[], int n){
    srand(time(0));
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 10;
    }
}
void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}
int main(){
    const int n=5;
    int arr[n];
    generaterandom(arr, n);
    cout<<"Random arr";
    printarr(arr, n);

    bubblesort(arr, n);
    cout<<"Sorted arr";
    printarr(arr, n);

    return 0;
}