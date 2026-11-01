
#include <iostream>
using namespace std;

// Merge two sorted halves of the array
void merge(int arr[], int low, int mid, int high) {

    int i = low;       // Starting index of left half
    int j = mid + 1;   // Starting index of right half
    int k = low;       // Index for temporary array

    int temp[100];     // Temporary array to store sorted elements

    // Compare elements from both halves
    while (i <= mid && j <= high) {

        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from right half
    while (j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements back to original array
    for (int x = low; x <= high; x++) {
        arr[x] = temp[x];
    }
}

// Divide the array and sort each half
void mergeSort(int arr[], int low, int high) {

    // Base condition: one or zero elements
    if (low >= high) {
        return;
    }

    // Find the middle index
    int mid = low + (high - low) / 2;

    // Sort the left half
    mergeSort(arr, low, mid);

    // Sort the right half
    mergeSort(arr, mid + 1, high);

    // Merge both sorted halves
    merge(arr, low, mid, high);
}

int main() {

    int arr[] = {8, 3, 5, 1, 9, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Call merge sort for the complete array
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
