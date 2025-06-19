#include <iostream>
using namespace std;


void printspecial(int start, int end) {
    for (int i = start; i <= end; i++) {
        if ((i % 3 == 0 || i % 5 == 0) && i % 15 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    printspecial(start, end);

    return 0;
}
