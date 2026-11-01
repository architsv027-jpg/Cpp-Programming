#include<iostream>
using namespace std;


int power(int n){
    if(n==0)
    return 1;

        //recursive problem


        int finalans= 2*power(n-1);

        return finalans;

        // int smallerproblem=power(n-1);
        // int biggerproblem= 2* smallerproblem;

        //return biggerproblem; 
}
int main(){

    int n;
    cin >> n;


    int ans=power(n);

     cout << ans <<endl;
}