#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()

// remove same consuetive char;
{
    vector<string> s = {"ab", "cb", "cb", "ab" , "fdg"};

    stack<string> st;

    for(int i = 0; i < s.size(); i++)
    {
        if(!st.empty() && st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    // while(!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
       cout << st.size();
    return 0;
}