#include<iostream>
using namespace std;

void printEven(int n){
    if(n==0){
        cout<<n<<" ";
        return;
    }
      printEven(n-2);
    cout<<n<<" ";
    
}
int main(){
    // for(int i=0; i<=9; i=i+2){
    //     cout<<i<<" ";
    // }
    
printEven(10);
    
}