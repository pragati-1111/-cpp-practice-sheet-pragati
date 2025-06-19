#include<iostream>
using namespace std;

void checkPerfectStudent(int math, int phy, int eng, int com) {
    int total = math + phy + eng + com;
    float avg = total / 4;

    if (math >= 60 && math <= 100 && phy >= 60 && phy <= 100 && eng >= 60 && eng <= 100 &&com >= 60 && com <= 100) {
        
        cout << "Congratulations, you are eligible." << endl;

        if (avg > 75 && avg < 100) {
            cout << "The student is a perfect student." << endl;
        } else {
            cout << "Sorry, the student is not a perfect student." << endl;
        }

    } else {
        cout << "Sorry, you are not eligible in all subjects." << endl;
    }
}

int main() {
    int math, phy, eng, com;

    cout << "Enter marks for Maths: ";
    cin >> math;
    cout << "Enter marks for Physics: ";
    cin >> phy;
    cout << "Enter marks for English: ";
    cin >> eng;
    cout << "Enter marks for Computer: ";
    cin >> com;

    checkPerfectStudent(math, phy, eng, com);

    return 0;
}
