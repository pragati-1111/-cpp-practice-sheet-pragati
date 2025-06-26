#include<iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Factors of " << num << " = ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl << "Total number of factors: " << count << endl;

    if (count == 2) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
