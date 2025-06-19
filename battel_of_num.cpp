#include<iostream>
using namespace std;

int main() {
    int first, second, digit1, digit2, sum1 = 0, sum2 = 0;

    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the second number: ";
    cin >> second;

    while (first != 0) {
        digit1 = first % 10;
        sum1 = sum1 + digit1;
        first = first / 10;
    }

    while (second != 0) {
        digit2 = second % 10;
        sum2 = sum2 + digit2;
        second = second / 10;
    }

    if (sum1 == sum2) {
        cout << "Both are equal" << endl;
    }
    else if (sum2 > sum1) {
        cout << "Number 2 is big" << endl;
    }
    else {
        cout << "Number 1 is big" << endl;
    }

    return 0;
}
