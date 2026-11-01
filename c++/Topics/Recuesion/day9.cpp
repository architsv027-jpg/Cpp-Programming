#include<iostream>
using namespace std;

// 1. Recursion Function for Product of Digits
int productOfDigits(int n) {
    // Base Case: Agar number single digit ka hai (0 se 9 ke beech)
    // toh bina kisi extra step ke vahi number return kar do.
    if (n < 10) {
        return n;
    }
    
    // Recursive Call: Aakhiri digit * bache hue number ka product
    return (n % 10) * productOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Koi bhi number daalo: ";
    cin >> n;
    
    // Handle Negative Numbers: Agar user minus me number dale toh use positive bana do
    // if (n < 0) {
    //     n = -n;
    // }

    // Function ko call kiya aur result print kar diya
    int result = productOfDigits(n);
    cout << "Digits ka product hai: " << result << endl;

    return 0;
}