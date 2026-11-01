//add element in bottom of the stack 

#include<iostream>
#include<stack>
using namespace std;


void insertBottom(stack<int> & st,int x){

    //base conditon

    if(st.empty()){
        st.push(x);
        return ;
    }

    int num =st.top();
    st.pop();

    insertBottom(st,x);
    st.push(num);

}
int main(){

    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(3);
    st.push(9);

    insertBottom(st,10);
   while(!st.empty()){
        cout<< st.top()<< " ";
        st.pop();
    }

    return 0;
}