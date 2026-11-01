/// Previous Smaller Element (PSE) ya Next Smaller Element to the Left (NSEL)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){


    

    int arr[6]={5,6,9,7,8,5};
    int n=6;
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=0 ; i<n; i++){

    while(!st.empty()  && st.top()>=arr[i]){
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