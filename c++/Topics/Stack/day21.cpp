#include <iostream>
#include <stack>
#include <vector>
using namespace std;
 
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> st;

    // Step 1: Put all people into stack
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    // Step 2: Find the potential celebrity
    while (st.size() > 1)
    {
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if (M[a][b] == 1)
        {
            // a knows b, so a can't be celebrity
            st.push(b);
        }
        else
        {
            // a doesn't know b, so b can't be celebrity
            st.push(a);
        }
    }

    // Step 3: Potential candidate
    int candidate = st.top();

    // Step 4: Verify candidate

    // Row check (candidate should know nobody)
    for (int i = 0; i < n; i++)
    {
        if (M[candidate][i] == 1)
            return -1;
    }

    // Column check (everyone should know candidate)
    for (int i = 0; i < n; i++)
    {
        if (i != candidate && M[i][candidate] == 0)
            return -1;
    }

    return candidate;
}

int main()
{
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {1, 1, 0}
    };

    int ans = celebrity(M, 3);

    if (ans == -1)
        cout << "No Celebrity";
    else
        cout << "Celebrity Index = " << ans;

    return 0;
}