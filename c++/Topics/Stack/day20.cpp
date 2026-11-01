#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {8, 2, 6, 5, 4, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> left(n), right(n);
    stack<int> st;

    // Next Smaller Element Index (Right)
    
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        right[st.top()] = n;
        st.pop();
    }

    // Previous Smaller Element Index (Left)
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (st.empty())
            left[i] = -1;
        else
            left[i] = st.top();

        st.push(i);
    }

    // Maximum Area
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int height = arr[i];
        int width = right[i] - left[i] - 1;
        int area = height * width;

        ans = max(ans, area);
    }

    cout << "Largest Area = " << ans << endl;

    return 0;
}