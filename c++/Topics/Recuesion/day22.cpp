
#include<iostream>
#include<string>
using namespace std;

int checkVowel(string str, int index, int n) {

    // Base condition
    if(index < 0) {
        return 0;
    }

    if(str[index] == 'a' || str[index] == 'e' ||
       str[index] == 'i' || str[index] == 'o' ||
       str[index] == 'u') {

        return 1 + checkVowel(str, index - 1, n);
    }

    return checkVowel(str, index - 1, n);
}

int main() {
    string str = "naman";
    int n = str.length();

    cout << checkVowel(str, n - 1, n);

    return 0;
}
