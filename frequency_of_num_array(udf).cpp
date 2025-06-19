#include <iostream>
using namespace std;


int findFrequency(int array[], int size, int number) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[10],n, number;

    cout << "Enter size of array: ";
    cin >> n;

    // cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to find its frequency: ";
    cin >> number;

    int freq = findFrequency(arr, n, number);

    cout << "Frequency of " <<number << " is: " << freq << endl;

    return 0;
}
