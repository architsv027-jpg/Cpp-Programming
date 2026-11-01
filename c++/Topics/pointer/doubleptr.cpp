#include<iostream>
using namespace std;
int main(){

    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;

    cout<< "all is well"<<endl;

   // cout<<"addresh is i:"<<&i<<endl;
    cout<<"value is ptr:"<<ptr<<endl;
    cout<<"addresh is ptr:"<<&ptr<<endl;
    cout<<"addresh is ptr2:"<<ptr2<<endl;



     cout<<" i is :"<<i<<endl;
     cout<<*ptr<<endl;
     cout<<**ptr2<<endl;

return 0;
}