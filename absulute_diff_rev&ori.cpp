#include<iostream>
using namespace std;

int main() {
    int num, rev = 0, digit;

    cout << "Enter the positive integer: ";
    cin >> num;

    int original = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10; 
    }

    cout << "Input: " << original << endl;
    cout << "Reversed: " << rev << endl;
    cout << "Difference: " << rev - original << endl;

    return 0;
}
