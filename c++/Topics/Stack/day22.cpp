#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,3};

    int n = arr.size();

    // Starting Index
    for (int start = 0; start < n; start++) {

        // Ending Index
        for (int end = start; end < n; end++) {

            // Print Subarray
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}