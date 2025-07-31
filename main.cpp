#include <iostream>
using namespace std;
int main() {
    string username, password;
    cout << "Enter username: "; cin >> username;
    cout << "Enter password: "; cin >> password;

    bool nickAut= username=="nmawulorm" && password=="password";
    bool ornaAut= username=="orna" && password=="orna_pass";

    if (nickAut||ornaAut) cout << "Login successful" << endl;
    else cout << "Access denied" << endl;

    return 0;
}