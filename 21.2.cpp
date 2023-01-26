#include <iostream>
using namespace std;

int product (int, int);

int main () {

int x;
int y;
int i;

cout << "Please enter a value for X: " << endl;
cin >> x;
cout << "Please enter a value for Y: " << endl;
cin >> y;

i=product(x, y);
cout << i << endl;

return 0;
}

int product (int x, int y) {

    int n=0;

if(y==1) {

    return x;
}

else {

    n=x*y;
}
return n;
}
