#include <cmath>
#include <iostream>
using namespace std;

int main() {

    double grade;

    cout<< "Check your degree honours\n";

    cout<<"Enter your grade: "; cin>>grade;

    if (grade < 2.0) cout << "Pass" << endl;
    else if (grade < 2.5) cout << "Third Class" << endl;
    else if (grade < 3.0) cout << "Second class lower" << endl;
    else if (grade < 3.5) cout << "Second class upper" << endl;
    else {
        cout <<"First class" << endl;
        cout << "The eye of the country";
    }

    return 0;
}
