//write a c++ program that takes 10 integer from user and then displays the following 
//***cout of even number
//***cout of odd number
// sum of all even number
// sum of all odd number

#include<iostream>
using namespace std;

int main() {
    int num, digit;
    int evenSum = 0, oddSum = 0;
    int evenCount = 0, oddCount = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        digit = num % 10;

        if(digit % 2 == 0) {
            evenSum += digit;
            evenCount++;
        } else {
            oddSum += digit;
            oddCount++;
        }

        num = num / 10;
    }


    cout << "Even digits count: " << evenCount << endl;
    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Odd digits count: " << oddCount << endl;
    cout << "Sum of odd digits: " << oddSum << endl;

    return 0;
}
