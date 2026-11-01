#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    if(size == 0)
        return false;

    if(arr[0] == key)
        return true;

    return linearSearch(arr + 1, size - 1, key);
}

int main(){

    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int key = 30;

    bool ans = linearSearch(arr, size, key);

    if(ans)
        cout << "Key is present";
    else
        cout << "Key is not present";

    return 0;
}