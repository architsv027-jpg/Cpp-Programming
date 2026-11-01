//next greater element
//brust forse approch 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {6,8,0,1,3};
    int n = arr.size();

    vector<int> nge(n, -1); // default -1

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; // first greater mil gaya
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << nge[i] << " ";
    }

    return 0;
}