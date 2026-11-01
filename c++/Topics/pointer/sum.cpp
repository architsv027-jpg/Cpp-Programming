// #include<iostream>
// using namespace std;
// int main(){
//     int a=56;
//     int b=14;
//     int c=a+b;
//     cout<<"sum is "<<c<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int  arr[5]={5,8,9,63,22};

//     int smallest=arr[0];
//     for(int i=1;i<5;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<"Smallest element is: "<<smallest<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){

    int  arr[5]={5,8,9,63,22};

    int largest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest element is: "<<largest<<endl;
    return 0;
}