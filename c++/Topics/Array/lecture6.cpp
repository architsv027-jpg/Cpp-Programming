// Search Element


#include<iostream>
using namespace std;
int main()
{

    int arr[6]={5,8,6,3,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=11;

    for(int i=0 ; i<n; i++){
        if(arr[i]==target){
         cout << target << " is found" << endl;
        }
        else{
            cout << target << " is  not found" << endl;
        }
    }

    return 0;
}