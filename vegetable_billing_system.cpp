#include<iostream>
using namespace std;

int main() {
    int potato = 20, tomato = 30, onion = 25, okra = 40;
    int qty, price, total = 0;
    int ch;

    do {
        cout << "1.Potato  2.Tomato  3.Onion  4.Okra  0.Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> ch;

        if(ch == 1) {
            cout << "Enter kg of Potato: ";
            cin >> qty;
            price = qty * potato;
            cout << "Price: " << price << endl;
            total = total + price;
        }

        if(ch == 2) {
            cout << "Enter kg of Tomato: ";
            cin >> qty;
            price = qty * tomato;
            cout << "Price: " << price << endl;
            total = total + price;
        }

        if(ch == 3) {
            cout << "Enter kg of Onion: ";
            cin >> qty;
            price = qty * onion;
            cout << "Price: " << price << endl;
            total = total + price;
        }

        if(ch == 4) {
            cout << "Enter kg of Okra: ";
            cin >> qty;
            price = qty * okra;
            cout << "Price: " << price << endl;
            total = total + price;
        }

    } while(ch != 0);

    cout << "Total Bill: " << total << " Rs" << endl;

    return 0;
}
