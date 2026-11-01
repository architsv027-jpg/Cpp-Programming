
//stock spon 


#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int price[] = {100, 80, 60, 70, 60, 75, 85};
    int n = 7;

    stack<int> st;          // Stack me index store hoga
    vector<int> span(n);

    for(int i = 0; i < n; i++)
    {
        // Current price se chhote ya equal sab hata do
        while(!st.empty() && price[st.top()] <= price[i])
        {
            st.pop();
        }

        // Agar koi previous greater nahi mila
        if(st.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            span[i] = i - st.top();
        }

        // Current index push karo
        st.push(i);
    }

    cout << "Stock Prices : ";
    for(int i = 0; i < n; i++)
    {
        cout << price[i] << " ";
    }

    cout << "\nSpan         : ";
    for(int i = 0; i < n; i++)
    {
        cout << span[i] << " ";
    }

    return 0;
}