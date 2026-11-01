#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main(){

    vector<int>arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;    
    arr[5] = 60;

    //accumulate function ka use krke vector ke sare element ka sum nikal sakte hai
    // int sum = accumulate(arr.begin(), arr.end(), 0);
    // cout<<"The sum of the vector is: "<<sum<<endl;

    auto it=min_element(arr.begin(), arr.end());
    cout<<"The minimum element in the vector is: "<<*it<<endl;

    auto it2=max_element(arr.begin(), arr.end());
    cout<<"The maximum element in the vector is: "<<*it2<<endl;

    return 0;
}