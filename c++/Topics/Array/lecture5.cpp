#include<iostream>
#include<climits>
using namespace std;
int main(){
   int arr[5]={6,12,5,58,564};
    int n=5;
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            smx=mx;
            mx=arr[i];
        }
        else if(arr[i]>smx && arr[i]!=mx){
            smx=arr[i];
        }

}
cout<<mx<<endl;
cout<<smx<<endl;
    return 0;
}