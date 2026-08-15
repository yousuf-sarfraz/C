#include<iostream>
using namespace std;

int  array(int arr[] ,int n)
{
    if(n==0)
    {
        return 0;
    }
    return arr[n-1]+array(arr,n-1);
}
int main(){
    int n=5;

    int arr[5]={5,8,1,2,3};

    cout<<"sum = "<<array(arr,n)<<endl;

    return 0;
}