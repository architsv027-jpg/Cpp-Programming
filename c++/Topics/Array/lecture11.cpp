#include<iostream>
using namespace std;

int main()
{

    int arr[1000]={5,6,3,9,7,2,4,1};
    int n=8;
    for(int i=0 ; i< n-1 ; i++){

        int index=i;

        for(int j=i+1 ; j<n ; j++){

            if(arr[j] <arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
