// Ye Previous Greater Element (PGE) ya Next Greater Element to the Left (NGEL)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

    //previous greater element


    int arr[6]={6,7,5,9,8,3};
    int n=6;
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=0 ; i<n; i++){

    while(!st.empty()  && st.top()<=arr[i]){
        st.pop();
    }
        if(st.empty()){
           ans[i]=-1;
        }
        else{
            ans[i]=st.top();
            

        }  
         st.push(arr[i]);
    }         
    
    for(int i=0; i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}