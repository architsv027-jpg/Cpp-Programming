// Sum to Array by usig recursion;

#include<iostream>
using namespace std;

int sum(int arr[], int index , int n) {

    if(index==n){
        return 0;
    }
    cout << arr[index] << " ";
    sum(arr,index+1,n);
   
}

int main() {
    int arr[] = {4, 2, 3, 6, 5};

    sum(arr, 0 ,5);
}