#include<iostream>
using namespace std;

//bool isSorted(int arr[], int size)

bool isSorted(int *arr, int size){

    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1])
        return false;

    return isSorted(arr + 1, size - 1);
}

int main(){

    int arr[5] = {1,2,8,4,5};

    bool ans = isSorted(arr, 5);

    if(ans)
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}