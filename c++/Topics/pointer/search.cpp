#include<iostream>
using namespace std;
int binsearch(int arr[],int n, int key){


 int start=0;
 int end=n-1;

 int mid=(start +end)/2;

 while(start<=mid){

    if(arr[mid]==key){
        return mid;
    }
    //  go to right part
    if(key>arr[mid]){
        start=mid+1;
    }
    else{
        start=mid-1;
    }
    mid=start =(end-start)/2;

}
return -1;

 }
int main(){

 int  even[6]={2,8,12,10,14,100};
 int odd[5]={3,7,13,19,37};


     int evenindex= binsearch(even,6,10);
        
     
     cout<<"index is 10:"<<evenindex<<endl;
     int oddindex= binsearch(odd,5,13);
      cout<<"index is 13:"<<oddindex<<endl;
 

    return 0;
}