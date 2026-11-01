#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[10] = {7,2,6,8,9,-4,2,3,-9,1};

    int n = 10;

    for(int i = 0; i < n; i++){

        int sum1 = 0;
        int sum2 = 0;

        // Left side sum
        for(int j = 0; j < i; j++){
            sum1 += arr[j];
        }

        // Right side sum
        for(int j = i + 1; j < n; j++){
            sum2 += arr[j];
        }

        if(sum1 == sum2){
            cout << "Pivot Index: " << i << endl;
            return 0;
        }
    }

    cout << "No Pivot Index" << endl;

    return 0;
}