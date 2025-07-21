#include <iostream>
using namespace std;

int main() {
    string currency;
    int amount;
    int duration;

    cout << "Welcome to O&B Loans and Savings" <<endl;
    cout << "---------------------------------" <<endl;

    cout << "Fill out the following" << endl;
    cout << "currency: ";
    cin >> currency;
    cout << "amount: ";
    cin >> amount;
    cout << "duration: ";
    cin >> duration;

    cout << "------------------\n";
    cout << "Total: "<<currency<<amount * duration * 0.1 + amount;




    return 0;
}