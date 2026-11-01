
#include<iostream>
using namespace std;

int linearSearch(int arr[], int key, int index, int N) {

    // Base condition
    if(index == N) {
        return 0;
    }

    if(arr[index] == key) {
        return 1;
    }

    return linearSearch(arr, key, index + 1, N);
}

int main() {

    int arr[] = {4, 2, 5, 3, 6, 9};
    int N = 6;
    int key = 5;

    cout << linearSearch(arr, key, 0, N);

    return 0;
}
