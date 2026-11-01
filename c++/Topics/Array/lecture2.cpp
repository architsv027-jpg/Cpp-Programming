#include<iostream>
#include<climits>
using namespace std;
int main(){
 
    int arr[]={6,12,5,58,564};
    int n=5;
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
       
    
       return 0;
}