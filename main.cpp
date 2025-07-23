#include <cmath>
#include <iostream>
using namespace std;

int main() {
    float a, b, c, x1, x2, frac1, frac2;
    cout<<"Quadratic calculator\n---------------------\n";
    cout<<"Enter a: "; cin>>a;
    cout<<"Enter b: "; cin>>b;
    cout<<"Enter c: "; cin>>c;

    frac1 = (-b/2*a);
    frac2 = pow(pow(b,2)-4*a*c,0.5)/(2*a);

    x1 = frac1+frac2;
    x2 = frac1-frac2;

    cout<<"The quadratic equation is: x1="<<x1<<", x2="<<x2;

    return 0;
}
