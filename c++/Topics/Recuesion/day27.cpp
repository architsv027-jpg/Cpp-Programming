#include <iostream>
#include <vector>
using namespace std;

void printsum(int arr[], int index, int n,
              int sum, int &total, vector<int> &current) {

    if (index == n) {

        cout << "Subset: { ";

        for (int x : current) {
            cout << x << " ";
        }

        cout << "} Sum: " << sum << endl;

        total += sum;
        return;
    }

    // Choice 1: Include
    current.push_back(arr[index]);

    printsum(arr, index + 1, n,
             sum + arr[index], total, current);

    current.pop_back();

    // Choice 2: Exclude
    printsum(arr, index + 1, n,
             sum, total, current);
}

int main() {

    int arr[] = {1, 2, 3};
    int total = 0;

    vector<int> current;

    printsum(arr, 0, 3, 0, total, current);

    cout << "\nTotal Sum = " << total;

    return 0;
}
