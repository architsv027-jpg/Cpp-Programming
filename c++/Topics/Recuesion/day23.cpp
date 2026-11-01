// reverse a string 


#include<iostream>
#include<string>
using namespace std;

void revers(string &str, int st, int end) {

    // Base condition
    if(st >= end) {
        return;
    }

    swap(str[st], str[end]);

    revers(str, st + 1, end - 1);
}

int main() {
    string str = "Archit";
    int n = str.length();

    revers(str, 0, n - 1);

    cout << str;

    return 0;
}
