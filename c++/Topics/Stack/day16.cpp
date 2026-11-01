// Next Smaller Element to the Left (NSEL)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    //

    int arr[6]={5,1,9,3,6,8};

    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int> ans(n ,-1);
    
    stack<int> st;

    for(int i=0 ; i<n; i++){
        while(!st.empty() && st.top()>= arr[i]){

            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]= st.top();
            
        }
        st.push(arr[i]);
    }
        for(int i=0 ; i< n ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}