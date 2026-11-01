#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    int i = 0;
    int j = 0;

    vector<int> ans;

    while (i < arr1.size() && j < arr2.size()) {

        if (arr1[i] <= arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    // arr1 ke remaining elements
    while (i < arr1.size()) {
        ans.push_back(arr1[i]);
        i++;
    }

    // arr2 ke remaining elements
    while (j < arr2.size()) {
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

int main() {

    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> ans = mergeSortedArrays(arr1, arr2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}