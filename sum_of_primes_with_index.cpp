#include<iostream>
using namespace std;

int main() {
    int arr[100];
    int size, i, j;
    int sum = 0;
    int count;

    cout << "Enter size of array: ";
    cin >> size;

    for(i = 0; i < size; i++) {
        cout << "Enter number at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Prime numbers of  index: ";
    for(i = 0; i < size; i++) {
        count = 0;

        for(j = 1; j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                count = count + 1;
            }
        }

        if(count == 2) {
            cout << i << " ";
            sum = sum + arr[i];
        }
    }

    cout << endl;
    cout << "Sum of prime numbers: " << sum << endl;

    return 0;
}
