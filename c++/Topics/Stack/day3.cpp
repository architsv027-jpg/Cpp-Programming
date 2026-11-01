//stack ke middle element ho remove

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st ,int count ,int size){

    // base condition

    if(count==size/2){
        st.pop();
        return;
    }

    int num =st.top();
    st.pop();

    //recursiove call

    solve(st , count +1, size);
    st.push(num);

}

void deleteElement(stack<int> &st){
    solve(st, 0, st.size());
}

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    deleteElement(st);

    cout << "Stack after deletion: ";
  


    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;



    return 0;
}