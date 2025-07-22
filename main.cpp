#include <iostream>
using namespace std;

int main() {
    string currency;
    int amount;
    int duration;

    cout << "Welcome to O&B Loans and Savings" <<endl;
    cout << "---------------------------------" <<endl;

    cout << "Fill out the following" << endl;
    cout << "Currency: ";
    cin >> currency;
    cout << "Amount: ";
    cin >> amount;
    cout << "Duration: ";
    cin >> duration;

    cout << "------------------\n";
    cout << "Total: "<<currency<<amount * duration * 0.1 + amount;




    return 0;
}
