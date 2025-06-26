#include<iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];


    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    
    int secondMax = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] != max) {
            if(secondMax == -1 || arr[i] > secondMax) {
                secondMax = arr[i];
            }
        }
    }

    if(secondMax == -1) {
        cout << "No second largest element .";
    } else {
        cout << "Second largest element is: " << secondMax;
    }

    return 0;
}
