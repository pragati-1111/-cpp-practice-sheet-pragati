#include <iostream>
using namespace std;


int LargestDigit(int num) {
    int digit, max = 0;

    while(num > 0) {
        digit = num % 10;     
        if(digit > max) {
            max = digit;      
        }
        num = num / 10;        
    }

    return max;
}

int main() {
    int number;

    cout << "Enter a number:= ";
    cin >> number;

    
    int largest = LargestDigit(number);
    cout << "Largest digit is: " << largest << endl;


    if(number % 2 == 0) {
        cout << "Number is even." << endl;
    } else {
        cout << "Number is odd." << endl;
    }

    return 0;
}
