#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector creation
    vector<int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
     marks.push_back(40);


    //  vector<int> marks2(marks); 
    //  marks2.push_back(50);  
    //  marks2.push_back(60);
    //  marks2.push_back(70);
    //  marks2.push_back(80);

    marks.insert(marks.begin(), 100);
     marks.insert(marks.end(), 200);
     marks.insert(marks.begin()+2, 300);

     for(int i=0; i<marks.size(); i++){
        cout<<marks[i]<<" ";
     }

     vector<int>::iterator it = marks.begin();
     
     while(it != marks.end()){
        cout<<*it<<" ";
        it++;
     }  
     cout<<endl;
    //  marks2.swap(marks);
     
    //  for(int i=0; i<marks.size(); i++){
    //     cout<<marks[i]<<" ";
    //  }


     cout<<"size of vector is: "<<marks.size()<<endl;
     cout<<"first element is: "<<marks.front()<<endl;
    //  cout<<"last element is: "<<marks.back()<<endl;
    //  marks.pop_back();
    //  marks.pop_back();
    //  cout<<"size of vector is: "<<marks.size()<<endl;

    //   cout<<"first element is: "<<marks.front()<<endl;
        cout<<"last element is: "<<marks.back()<<endl;
    cout<<"size of vector is: "<<marks.size()<<endl;
    // marks.insert(marks.begin(), 100);
    // cout<<"size of vector is: "<<marks.size()<<endl;
    // cout<<"first element is: "<<marks[0]<<endl;

    return 0;
}