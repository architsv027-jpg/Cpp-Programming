
#include<iostream>
using namespace std;

int Num(int n){
    //BASE Condition
    if(n==0)
    return 0;

        //Recursive Call
 return n +Num(n-1);
}
int main(){

    int n;
    cin>>n;
    cout << "1 se " << n << " tak ka sum hai: " << Num(n) << endl;
   
}


