#include <complex>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
       int num;
       cout<< "Enter a number: "; cin>>num;

       for (int i=1; i<=12; i++) {
              cout <<num<< " x "<< i <<" = "<< num * i << endl;
       }

       return 0;
}
