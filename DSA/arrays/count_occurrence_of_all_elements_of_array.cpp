#include <iostream>
using namespace std;

int main(){
    int n=9;
    int arr[9]={1,2,3,4,5,4,3,2,5};


    for (int i = 0; i < n; i++)
    {
        bool alreadyCounted = false;

        // Check previous elements
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

         int count=0;
   
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
            cout<<" number "<<arr[i]<<" appear "<<count<<" times ";
            cout<<endl;
    }
   
    return 0;
}