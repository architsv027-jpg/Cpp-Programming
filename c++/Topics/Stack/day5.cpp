//Reverse string using stack

#include<iostream>
#include<stack>
using namespace std;
int main(){

   string str = "ABCD";

    stack<char> st;

    for(int i=0;i<str.length() ; i++){
        st.push(str[i]);
    }

    int i=0;
    while(!st.empty()){

        str[i]=st.top();
        i++;
        st.pop();
    }

    cout<< str ;

    return 0;
}