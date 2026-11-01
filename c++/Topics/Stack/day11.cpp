#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    string s="(aa(bdc))p(shdg)";

    stack<int> st;
    vector<int>ans;
    int count=0;
  
    for(int i=0; i< s.size(); i++){

        if(s[i]=='('){
            count++;
            st.push(count);
            ans.push_back(count);
        }
        else{
            if(s[i]==')'){
                ans.push_back(st.top());
                st.pop();
            }

        }

    }
    // vector c+6+mai direct ans return nhi kra skta 

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}