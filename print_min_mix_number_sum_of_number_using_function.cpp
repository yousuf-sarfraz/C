#include <iostream>
using namespace std;
int sum (int a,int b){
    int s = a + b;
    return s;}

int minoftwo( int a, int b)
{
    if(a < b){
    return a;}
    else{
        return b;
    }
}
int mixoftwo(int a, int b){
    if(a<b){
        return b;
    }else{
        return a;
    }
}
int sumn(int n){
    int sum = 0;
    for(int i = 0;i <= n; i++){
        sum +=i;
    }
    return sum;
}
int main(){
    cout<<sum(9,8)<<endl;
    cout<<"min=" <<minoftwo(9,3)<<endl;
    cout<<"mix="<<mixoftwo(9,4)<<endl;
    cout<<"sum="<<sumn(9)<<endl;
    return 0;  
}