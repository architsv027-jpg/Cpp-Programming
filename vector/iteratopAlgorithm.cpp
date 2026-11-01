#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// void printdouble(int a){
//     cout<<a*2<<" ";
// }
// void checkeven(int a){
//     if(a%2 == 0){
//         cout<<a<<" is even"<<endl;
//     }
//     else{
//         cout<<a<<" is odd"<<endl;
//     }
// }
int main(){
    vector<int>arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;

    cout<<"Before rotation: "<<endl;
    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;

        //right rotation
    rotate(arr.begin(), arr.begin()+3, arr.end());


    cout<<"After rotation: "<<endl;
    for(int a: arr){
        cout<<a<<" ";
    }

    //left rotation
    cout<<endl;


    // for_each(arr.begin(), arr.end(), printdouble);

    // cout<<endl;
    // cout<<endl;
    // for_each(arr.begin(), arr.end(), checkeven);
    // cout<<endl;
    // cout<<endl;
    // // count the number of times 11 is present in the vector
    // int target = 11;
    // int ans = count(arr.begin(), arr.end(), target);
    // cout<<ans<<endl;


    // sort function ka use kre value ko  ascendinng mai set kr diye 

    // sort(arr.begin(), arr.end());
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}