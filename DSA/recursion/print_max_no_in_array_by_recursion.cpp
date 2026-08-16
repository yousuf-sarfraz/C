#include <iostream>
using namespace std;

int maxnum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return max(arr[n - 1], maxnum(arr, n - 1));
}
int main() {
    int arr[] = {12, 45, 7, 89, 23, 56};
    int n = 6;
    cout<<"Maximum element: " << maxnum(arr, n);
    cout<<endl;
    return 0;
}