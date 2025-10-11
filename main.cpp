#include <iostream>
using namespace std;
int main() {
    double height, totalCoast,quality, bobcut, afro, pixiecut;
    bobcut = 750.0/10;
    afro = 950.0/5;
    pixiecut = 1050.0/3;

    cout<<"Place your bob cut order\n";
    cout<<"Height: "; cin>>height;
    cout<<"Quality: "; cin>>quality;

    totalCoast = height*quality*bobcut;

    cout<<"Place your afro hair order\n";
    cout<<"Height: "; cin>>height;
    cout<<"Quality: "; cin>>quality;

    totalCoast = (height*quality*afro)+totalCoast;

    cout<<"Place your pixie cut order\n";
    cout<<"Height: "; cin>>height;
    cout<<"Quality: "; cin>>quality;

    totalCoast = (height*quality*pixiecut)+totalCoast;

    cout<<"Your total cost is: "<<totalCoast<< " ghana cedis.";

    }
