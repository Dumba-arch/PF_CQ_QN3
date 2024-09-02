#include <iostream>
using namespace std;

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0;  // Return 0 to indicate failure to reduce
    }

    int divisor = gcd(num, denom);

    num /= divisor;
    denom /= divisor;

    return 1;  // Return 1 to indicate success
}

int main() {
    int num, denom;
    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> denom;

    if (reduce(num, denom)) {
        cout << "The reduced fraction is: " << num << "/" << denom << endl;
    } else {
        cout << "Failed to reduce the fraction. Both numerator and denominator must be positive." << endl;
    }

    return 0;
}

