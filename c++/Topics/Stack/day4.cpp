#include<iostream>
#include<stack>
using namespace std;


void insertSort(stack<int> &st , int x){

    //base condition

    if(st.empty() || st.top()<=x){
        st.push(x);
        return ;
    }

    int num=st.top();
    st.pop();

    //Recursive call

    insertSort(st,x);
    st.push(num);


}

void sortStack(stack<int> &st){
    //base condition
    if(st.empty())
    return;
int num=st.top();
      st.pop();


      //recursive call
      sortStack(st);

      insertSort(st,num);


}
int main(){

    stack<int> st;
    st.push(4);
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(7);

    sortStack(st);

   while(!st.empty()){
    cout << st.top() << " ";
    st.pop();
}
 
    return 0;
}