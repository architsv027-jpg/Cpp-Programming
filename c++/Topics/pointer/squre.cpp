#include<iostream>
using namespace std;

long long int binarysqure(int n){
    int s=0;
    int e=n;
     long long int ans=-1;
     long long int mid=s +(e-s)/2;

     while(s<=e){
        long long int square=mid*mid;
        if(square==n)
        return mid;

            if(square<n){
                s=mid+1;
                ans=mid;
            }
            else{
                e=mid-1;
            }
            mid=s +(e-s)/2;
     }
     return ans;
    }

int main(){

   cout<< binarysqure(37);
    return 0;
}