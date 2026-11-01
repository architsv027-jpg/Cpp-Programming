// Next Smaller Element to the Right (NSER)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

    int arr[5]={5,6,2,1,9};

    int n=sizeof(arr) / sizeof(arr[0]);


    stack<int>st;

    vector<int>ans(n ,-1);

    for(int i =n-1; i>=0; i--){
        
        while(!st.empty() &&  st.top() >= arr[i]){
            st.pop();
        }

        if(st.empty())
        ans[i]=-1;
    else
        ans[i]=st.top();
    
       st.push(arr[i]);
    
    }
     

    for(int i=0 ; i< n ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}