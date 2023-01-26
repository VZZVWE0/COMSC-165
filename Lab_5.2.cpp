#include <iostream>
#include <iomanip>

using namespace std;

int main () {

const double EUROS_PER_DOLLAR=.89, RUPEES_PER_DOLLAR=67.18;
double usdollar;

    cout << "Enter U.S. dollar amount to convert: " << endl;
    cin >> usdollar;

    cout << fixed << setprecision(2) << usdollar << " is " << usdollar*EUROS_PER_DOLLAR << endl;

    cout << fixed << setprecision(2) << usdollar << " is " << usdollar*RUPEES_PER_DOLLAR << endl;

    return 0;

}
