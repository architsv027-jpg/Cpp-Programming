//  MOST IMP QUESTION  VAILD PARANTHESES
//Logic
Opening bracket mile to stack me push karo.
Closing bracket mile to:
Stack empty hai → Invalid
Top matching opening bracket nahi hai → Invalid
Match ho gaya → Pop karo.
End me stack empty hona chahiye.



#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }

            char top = st.top();

            if((ch == ')' && top == '(') ||
               (ch == '}' && top == '{') ||
               (ch == ']' && top == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string s = "{[()]}";

    if(isValid(s))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}