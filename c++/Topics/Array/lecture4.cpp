#include<iostream>
using namespace std;
int main(){
    
    int arr[]={6,12,5,58,564};
    int n=5;
    int target=58;
    for(int i=0; i<=n; i++){
        if(arr[i]==target){
            cout<<target<<" is present at index: "<<i<<endl;
             return 0;
        }
    }
    return 0;
}