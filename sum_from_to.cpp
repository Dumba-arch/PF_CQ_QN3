#include <iostream>
using namespace std;

int sum_from_to(int first, int last) {
    int sum = 0;

    // Ensure that first is less than or equal to last
    if (first > last) {
        swap(first, last);
    }

    // Sum all integers from first to last inclusive
    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int first, last;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the last number: ";
    cin >> last;

    cout << "The sum from " << first << " to " << last << " is " << sum_from_to(first, last) << endl;

    return 0;
}

