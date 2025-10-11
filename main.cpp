#include <iostream>
using namespace std;
int main() {
    double totalCost, quantity, height,
    bobCut = 750/10,
    wetCurls = 1000/10,
    afro=500/5,
    pixyCut=500/5;
    cout<<"Hi, please indicate details of the bob cut (GH "<<bobCut<<")\n";
    cout<<"Height: "; cin>>height;
    cout<<"Quantity: "; cin>>quantity;
    totalCost = quantity * bobCut * height;

    cout<<"Hi, please indicate details of the wetCurls (GH "<<wetCurls<<")\n";
    cout<<"Height: "; cin>>height;
    cout<<"Quantity: "; cin>>quantity;
    totalCost = (quantity * wetCurls * height) + totalCost;

    cout<<"Hi, please indicate details of the afro (GH "<<afro<<")\n";
    cout<<"Height: "; cin>>height;
    cout<<"Quantity: "; cin>>quantity;
    totalCost = (quantity * afro * height) + totalCost;

    cout<<"Hi, please indicate details of the pixy cut (GH "<<pixyCut<<")\n";
    cout<<"Height: "; cin>>height;
    cout<<"Quantity: "; cin>>quantity;
    totalCost = (quantity * pixyCut * height) + totalCost;

    cout<<"Your total cost is GH "<<totalCost<<endl;
    return 0;
}