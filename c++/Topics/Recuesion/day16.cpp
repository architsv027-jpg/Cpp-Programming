#include<iostream>
#include<stack>
using namespace std;

void insertBottom(stack<int> &st,int x){

    //base case

    
    if(st.empty())
    {
        st.push(x);
        return ;
    }

    int num=st.top();
    st.pop();

    insertBottom(st,5);
    st.push(num);


}
int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    insertBottom(st, 5);

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}