#include <iostream>
using namespace std;

void printsum(int arr[], int index, int n, int sum) {

    // Base case
    if (index == n) {
        cout << sum << endl;
        return;
    }

    // Choice 1: Include
    printsum(arr, index + 1, n, sum + arr[index]);

    // Choice 2: Exclude
    printsum(arr, index + 1, n, sum);
}

int main() {

    int arr[] = {1, 2, 3, 4};

    printsum(arr, 0, 4, 0);

    return 0;
}