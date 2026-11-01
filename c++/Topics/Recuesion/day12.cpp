#include<iostream>
using namespace std;

int getSum(int *arr,int size){
    if(size==0)
    return 0;

    if(size==1)
    return arr[0];

    return arr[0] + getSum( arr +1 , size-1);
}

int main(){
    int arr[6]={8,5,6,3,2,1};
    int size=6;

    int sum=getSum(arr,size);

    cout  << "sum of array:"  << sum <<  endl;
    return 0;
}