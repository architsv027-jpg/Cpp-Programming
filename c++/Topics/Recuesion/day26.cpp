// Print the subset of the array

#include <iostream>
#include <vector>
using namespace std;

void printSubsets(int arr[], int index, int n, vector<int>& ans) {

    // Base case: when we reach the end of the array

    if (index == n) {
        cout << "{ ";
        for (int val : ans) {
            cout << val << " ";
        }
        cout << "}\n";
        return;
    }

    // Choice 1: Include the current element

    ans.push_back(arr[index]);
    printSubsets(arr, index + 1, n, ans);
    
    // Backtrack (remove the element before exclusion branch)

    ans.pop_back(); 

    // Choice 2: Exclude the current element
    
    printSubsets(arr, index + 1, n, ans);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;

    printSubsets(arr, 0, n, ans);

    return 0;
}