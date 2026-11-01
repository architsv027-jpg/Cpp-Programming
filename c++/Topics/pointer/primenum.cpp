#include <iostream>
#include <vector>
using namespace std;

// Function to check prime number
bool isPrime(int num) {

    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {

    int n;
    cout << "Enter limit: ";
    cin >> n;

    vector<int> primeNumbers;
    int sum = 0;

    // Store prime numbers and calculate sum
    for (int i = 2; i <= n; i++) {

        if (isPrime(i)) {
            primeNumbers.push_back(i);
            sum += i;
        }
    }

    cout << "Sum of prime numbers = " << sum << endl;

    cout << "\nPrime Number * Sum:\n";

    // Multiply each prime number with sum
    for (int prime : primeNumbers) {
        cout << prime << " * " << sum
             << " = " << prime * sum << endl;
    }

    return 0;
}