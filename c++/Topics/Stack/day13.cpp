
// Next Greater Element (NGE) to the Right

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[5]={5,8,0,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    vector<int>ans(n,-1);

    stack<int>st;
    for(int i=n-1; i>=0; i--){

    //remove the small element of the stack

   while(!st.empty() && st.top()<= arr[i])
    {
        st.pop();
    }
    if(st.empty()){
        ans[i]=-1;
    }
    else{
        ans[i]=st.top();

    }


   // push current element
        st.push(arr[i]);
    }

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}