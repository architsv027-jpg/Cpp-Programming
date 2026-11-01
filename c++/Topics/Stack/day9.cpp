#include <iostream>
#include <stack>
using namespace std;

//valid parantheses checker

bool ValidParentheses(string s) {
    stack<char> st;

    for(int i = 0; i < s.size(); i++) {

        // opening brackets
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else {
            // agar stack empty hai to false
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            if((s[i] == ')' && top != '(') ||
               (s[i] == '}' && top != '{') ||
               (s[i] == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s = "{[()])}";

    if(ValidParentheses(s)) {
        cout << "Valid";
    } else {
        cout << "Invalid";
    }

    return 0;
}