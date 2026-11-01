// subsequence by recursion 

#include <bits/stdc++.h>
using namespace std;

void subsequence(int arr[], int index, int n, vector<vector<int>>& ans, vector<int>& temp)
{
    // Base Case
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

    // Not Included
    subsequence(arr, index + 1, n, ans, temp);

    // Included
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, n, ans, temp);

    // Backtracking
    temp.pop_back();
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    vector<vector<int>> ans;
    vector<int> temp;

    subsequence(arr, 0, n, ans, temp);

    for(auto it : ans)
    {
        for(auto x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}