// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
//   public:
//     int id;
//     int age;
//     string name;


//     Student(){
//         cout<<"Student default constructor called"<<endl;
//     }

//      ~Student(){
//         cout<<"Student default destructor called"<<endl;
//     }

//     void study(){
//         cout<<"Student is studying"<<endl;
//     }


// };

// int main(){

//     Student s1;
//     s1.id=101;
//     s1.age=20;
//     s1.name="John";

//     // cout<<"Student id is "<<s1.id<<endl;
//     // cout<<"Student age is "<<s1.age<<endl;
//     // cout<<"Student name is "<<s1.name<<endl;

//     s1.study();


//     return 0;
// }

#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    Student(Student &s) {
        name = s.name;
    }
};

int main() {
    Student s1("Archit");
    Student s2(s1);

    cout << s2.name;

    return 0;
}