#include<iostream>
using namespace std;

int main() {
    int size, target;
    cout << "Enter the size of array: ";
    cin >> size;

    int array[100];

    for (int i = 0; i < size; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> array[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] + array[j] == target) {
                cout << "Indices with target sum: " << i << " and " << j << endl;
                count++; 
            }
        }
    }

    if (count == 0) {
        cout << "No pair found with the target sum." << endl;
    }

    return 0;
}
