#include <iostream>
using namespace std;

int main(){
    int n=10;
    const int arr[10]={4,5,3,6,2,5,7,8,9,1};

    int sum=0;
    int product=1;

    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        product=product*arr[i];

    }
        cout<<"sum="<<sum<<endl;
        cout<<"product="<<product<<endl;
    return 0;
}