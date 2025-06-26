#include<iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int mat[100][100];

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    cout << "Spiral order: ";

    while (top <= bottom && left <= right) {

        // Left to right
        for (int i = left; i <= right; i++) {
            cout << mat[top][i] << " ";
        }
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;

        // Right to let
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }

    cout << endl;
    return 0;
}
