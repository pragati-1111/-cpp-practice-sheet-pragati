#include<iostream>
using namespace std;

int main() {
    int n, amt;
    int r99 = 0, r249 = 0, r399 = 0;
    int sum = 0;

    cout << "Enter number of customers: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter recharge amount for customer " << i << ": ";
        cin >> amt;

        if (amt == 99) {
            r99++;
            sum = sum + 99;
        } else if (amt == 249) {
            r249++;
            sum = sum + 249;
        } else if (amt == 399) {
            r399++;
            sum = sum + 399;
        } else {
            cout << "Invalid recharge amount!" << endl;
        }
    }

    cout << endl << "Recharge Summary:" << endl;
    cout << "₹99 recharges: " << r99 << endl;
    cout << "₹249 recharges: " << r249 << endl;
    cout << "₹399 recharges: " << r399 << endl;
    cout << "Total collection: ₹" << sum << endl;

    
    if (r99 == 0 && r249 == 0 && r399 == 0) {
        cout << "No recharges today." << endl;
    } else {
        if (r99 >= r249 && r99 >= r399) {
            cout << "Most popular recharge plan: ₹99" << endl;
        } else if (r249 >= r99 && r249 >= r399) {
            cout << "Most popular recharge plan: ₹249" << endl;
        } else {
            cout << "Most popular recharge plan: ₹399" << endl;
        }
    }

    return 0;
}
