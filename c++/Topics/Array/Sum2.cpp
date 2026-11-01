#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 7, 8, 9, 10};   // Array sorted hona chahiye

    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = n - 1;
    int target = 12;

    while (i < j)
    {
        int sum = arr[i] + arr[j];

        if (sum == target)
        {
            cout << "Pair Found: " << arr[i] << " " << arr[j];
            return 0;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "Pair Not Found";

    return 0;
}