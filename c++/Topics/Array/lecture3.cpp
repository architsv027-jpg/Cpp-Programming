#include<iostream>
using namespace std;
int main(){
  
    int n=5;
    int arr[]={6,12,5,58,564};
    
    cout << "Before reversing array:" << endl;

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        //two pointer approach
        int start=0;
        int end=n-1;


        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

        cout << "After reversing array:" << endl;
         for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
}