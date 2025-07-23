#include <cmath>
#include <iostream>
using namespace std;

int main() {

    string password, confirmPassword;
    cout<<"Enter password: "; cin>>password;
    cout<<"Confirm password: "; cin>>confirmPassword;

    if (password==confirmPassword) cout<<"Your passwords match";
    else cout<<"Your passwords do not match";

    return 0;
}
