#include<iostream>
using namespace std;

void intersectionelements(int arr1[],int arr2[],int n1,int n2)
{
    for(int i=0; i<n1; i++){

        for(int j=0; j<n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}
int main()
{
    int n1=5;
    int n2=5;
    int arr1[5]={1,3,7,9,4,};
    int arr2[5]={1,2,5,7,9};

    intersectionelements(arr1,arr2,n1,n2);

    return 0;
}