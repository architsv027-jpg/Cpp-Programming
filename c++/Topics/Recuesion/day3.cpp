// // 1 se n tk ke number

// #include<iostream>
// using namespace std;

// void count(int n){
//     if(n==0)

//     return ;

//     //Head recursion
//     cout<<n<<" ";

//      count(n-1);

//      // tail recursion
//      cout<<n<<" ";
// }
// int main(){

//         int n;
//         cin>>n;
//         count(n);
  
//         return 0;
  
// }


#include<iostream>
using  namespace std;


void home(int src,int dest){

    cout<<"source :  "<< src << " destination :  "<<dest<<endl;
    if(src==dest){

        cout<< "reach home"<<endl;
        return;

    }
    src++;
    home(src,dest);
}
  


int main(){


    int  src=1;
    int dest=10;

    home(src,dest);
    return 0;
}