#include <iostream>
using namespace std;

int main() {
    double  speed;
    double distance;

    cout <<"Welcome to O&B Automobile"<< endl;
    cout << "       The best"<< endl;
    cout << "-----------------------------" << endl;

    cout <<"Please provide the following information" << endl;

    cout <<"Speed of the car: ";
    cin >>speed;

    cout <<"Distance travelled: ";
    cin >>distance;

    cout <<"Hello Nicolas"<< ", with a speed of " <<speed<<" Km per hr  and distance travelled at "<<distance<< "Km"
    <<". You will get your destination in "<<distance/speed<<" hours time.";
    return 0;
}
