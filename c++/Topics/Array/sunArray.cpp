#include<iostream>
using namespace std;
int main(){

int arr[9]={-2,1,-3,4,-1,2,1,-5,4};

int n=9;

for( int start=0 ; start<=n ;start++){
    for(int end=start +1 ; end<=n ; end++){
        for(int i=start ; i<end; i++){
            cout<<arr[i];
        }
        cout<<" ";
       
    }
    cout << endl;
      cout << endl;
}



    return 0;
}