#include<iostream>
using namespace std;

bool BinarySearch(int *arr, int s, int e, int key)
{
    // Base Case
    if(s > e)
    {
        cout << "s = " << s << ", e = " << e
             << " => Key Not Found" << endl;
        return false;
    }

    int mid = s + (e - s) / 2;

    cout << "s = " << s
         << ", e = " << e
         << ", mid = " << mid
         << ", arr[mid] = " << arr[mid]
         << endl;

    if(arr[mid] == key)
    {
        cout << "Key Found at Index " << mid << endl;
        return true;
    }

    if(arr[mid] < key)
    {
        cout << "Going Right" << endl;
        return BinarySearch(arr, mid + 1, e, key);
    }
    else
    {
        cout << "Going Left" << endl;
        return BinarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {4,5,9,11,12,36};
    int key = 11;

    bool ans = BinarySearch(arr, 0, 5, key);

    if(ans)
        cout << "Final Answer: Key Found";
    else
        cout << "Final Answer: Key Not Found";

    return 0;
}