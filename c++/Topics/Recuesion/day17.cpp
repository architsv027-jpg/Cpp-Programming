#include<iostream>
#include<stack>
using namespace std;
int main(){


    string s="Archit";

    stack<char>st;

    //string put in the stack

    for(int i=0; i<s.length(); i++){
        char ch= s[i];
        st.push(ch);
    }

    string ans="" ;

    //string pop

    while(!st.empty()){
        char ch =st.top();
        ans.push_back(ch);
        st.pop();

    }
    cout<< " answer is:" << ans  <<endl;


    return 0;
}