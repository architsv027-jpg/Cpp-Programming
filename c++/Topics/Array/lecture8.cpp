//Missing number

#include<iostream>
using namespace std;
int main(){

    int arr[7]={1,2,4,5,6,7};

    int n=sizeof(arr)/sizeof(arr[0]);

    //sum of array 
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
    }
    cout<< sum <<" ";

    //find the sum of n nunmber;

   int  Nsum=n*(n+1)/2;
    cout<<  Nsum  << " ";

    int finalans=Nsum-sum;
    cout<< finalans << " ";


    return 0;
}