#include <iostream>
using namespace std;

void array(int n,int arr[]){
    if(n==0){
        return;
    }
     array(n-1,arr);
     cout << arr[n - 1] << endl;
}
int main(){
    int n=5;
    int arr[5]={3,5,4,6,2};
    array(n,arr);
    return 0;
}