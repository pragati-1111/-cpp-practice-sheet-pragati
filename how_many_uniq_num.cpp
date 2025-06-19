#include<iostream>
using namespace std;

void countUniqueDigits(int num) {
    int digit, i;
    int freq[10] = {0};  

    while(num > 0) {
        digit = num % 10;
        freq[digit] = 1;  
        num = num / 10;
    }

    cout << "Unique digits are:=";
    int count = 0;
    for(i = 0; i < 10; i++) {
        if(freq[i] == 1) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << count << " unique digits in number.";
}

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    countUniqueDigits(number);

    return 0;
}
