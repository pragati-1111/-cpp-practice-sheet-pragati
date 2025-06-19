#include <iostream>
using namespace std;

void countzero(int n) {
    int count = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;
        if (digit == 0) {
            count++;
        }
        n = n / 10; 
    }

    if (count > 0) {
        cout << "Total number of zeros: " << count << endl;
    } else {
        cout << "No zeros in the number." << endl;
    }
}

int main() {
    int num;
    cout << "Enter number to count zeros: ";
    cin >> num;

    countzero(num);

    return 0;
}
