#include<iostream>
using  namespace std;


int CountDigit(int n){
    if(n==0)
    return 0;
 return 1 + CountDigit(n/10);
}
int main(){

    int n;
    cin>>n;
 cout << "Total number of digits: " << CountDigit(n) << endl;
    return  0;
}