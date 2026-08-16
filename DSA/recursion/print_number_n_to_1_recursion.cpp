#include <iostream>
using namespace std;

void num(int n){
    if(n==0){
        return;
    }
     
     cout<<n<<endl;
     num(n-1);
}
int main(){
    num(5);
    return 0;
}