#include<iostream>
using namespace std;

int main()
{
    int arr[100] = {1,2,3,4,5,6,7,8};

    int n = 8; // actual size (important!)

    int last = arr[n-1];

    for(int i = n-2; i >= 0; i--){
        arr[i+1] = arr[i];
    }

    arr[0] = last;

    // print array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}