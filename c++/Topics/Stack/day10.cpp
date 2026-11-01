#include<iostream>
#include<stack>
using namespace std;

int main(){

    string s = "(())))(";

    stack<char> st;
    int count = 0;

    for(int i = 0; i < s.size(); i++){

        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                count++;      // unmatched closing bracket
            }
            else{
                st.pop();
            }
        }
    }

    count += st.size();       // unmatched opening brackets

    cout << count;

    return 0;
}