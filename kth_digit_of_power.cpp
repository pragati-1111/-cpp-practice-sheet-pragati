#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, k;
    int result, digit, i;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of k: ";
    cin >> k;

    result = pow(a, b);  
    for(i = 1; i <= k; i++) {
        digit = result % 10;   
        result = result / 10;  
    }

    cout << "The " << k << "th digit from right is: " << digit << endl;

    return 0;
}
