#include <iostream>
#include <cmath>

using namespace std;

int exponent (int, int);

int main () {

int base;
int power;
int i;

cout << "Please enter a base number: " << endl;
cin >> base;

cout << "Please enter a power: " << endl;
cin >> power;

i=exponent(base, power);
cout << i << endl;

return 0;
}

int exponent (int base, int power) {

int n=0;

if(power==1) {

    return base;
}

else {

    n=base*exponent(base,power-1);
}
return n;
}

