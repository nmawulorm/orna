#include <iostream>
using namespace std;
int main() {
    double amtSend=0, balance=0, eLevy=0, vat=0, serviceCharge=0, deduction=0;

    cout << "Enter amount to send: "; cin >> amtSend;
    cout << "Enter balance to send: "; cin >> balance;
    cout << "--------------------------------------------" << endl;

    if (amtSend>=100) {
        eLevy= 0.01*amtSend;
    }
    vat = 0.012*amtSend;
    serviceCharge = 0.05*amtSend;
    deduction=eLevy+vat+serviceCharge+amtSend;

    if (balance >= deduction) {
        cout << "Taxes:" << endl;
        if (eLevy>0) cout << "E-Levy (1%): " << eLevy << endl;
        cout << "VAT (1.2%): " << vat << endl;
        cout << "Service charge (0.5%): " << serviceCharge << endl;
        cout << "Deduction: " << deduction << endl;
        cout << "----------------------------------------------" << endl;

        cout << "New balance: " <<balance-deduction << endl;
    }
    else cout<< "Insufficient balance" << endl;
};