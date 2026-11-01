#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int>table;
    table.insert(10);
    table.insert(26);   
    table.insert(3);
    table.insert(40);

     // set<int>::iterator it = table.begin();
    // while(it != table.end()){
    //     cout<<*it<<" ";
    //     it++;


    if(table.find(2556) != table.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


    return 0;
}