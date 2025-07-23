#include <cmath>
#include <iostream>
using namespace std;

int main() {
    float length, width;

    cout<<"Square Length\n----------------------\n";;
    cout<<"Enter length: "; cin>>length;
    cout<<"Enter width: "; cin>>width;

    cout<<"A rectangle with length: "<<length;
    cout<<" and width: "<<width;
    cout<<" will result in a square with side: "<<pow(length * width,0.5);

    return 0;
}
