// Reverse Array 

#include<iostream>
using namespace std;
int main(){
    int arr[7]={9,8,7,6,5,4,3};

    int n =sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    };

        // Print reversed array
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    
    return 0;
}