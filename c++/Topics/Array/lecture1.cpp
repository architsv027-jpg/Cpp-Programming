#include<iostream>
#include<climits>
using namespace std;
int main(){
 
    int arr[]={6,12,5,58,564};
    int n=5;
    int smallest=INT_MAX;
    int minIndex = -1;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            minIndex = i;
        }
    }
    cout<<smallest<<endl;
     cout << "Index: " << minIndex << endl;
       return 0;
}