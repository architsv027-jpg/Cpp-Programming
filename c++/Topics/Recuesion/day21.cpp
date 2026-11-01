
// check palindrome

#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string str, int st, int end) {
    if(st >= end) {
        return 1;
    }

    if(str[st] != str[end]) {
        return 0;
    }

    return checkPalindrome(str, st + 1, end - 1);
}

int main() {
    string str = "naman";
    cout << checkPalindrome(str, 0, str.length() - 1);

    return 0;
}