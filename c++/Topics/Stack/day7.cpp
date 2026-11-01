#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// making array beautiful by using stack 

vector<int> makeBeautiful(vector<int> arr)
{
    stack<int> st;

    for(int i = 0; i < arr.size(); i++)
    {
        if(!st.empty() &&
          ((st.top() >= 0 && arr[i] < 0) ||
           (st.top() < 0 && arr[i] >= 0)))
        {
            st.pop();
        }
        else
        {
            st.push(arr[i]);
        }
    }

    vector<int> ans(st.size());

    for(int i = st.size()-1; i >= 0; i--)
    {
        ans[i] = st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    vector<int> arr = {4, -2, 5, 3};

    vector<int> ans = makeBeautiful(arr);

    for(int x : ans)
    {
        cout << x << " ";
    }
}