#include <iostream>

using namespace std;

int main () {

string month1, month2, month3;
double rainfall1, rainfall2, rainfall3;

    cout << "What is the name of the first month?" << endl;
    cin >> month1;
    cout << "How many inches of rain fell this month?" << endl;
    cin >> rainfall1;

    cout << "What is the name of the second month?" << endl;
    cin >> month2;
    cout << "How many inches of rain fell this month?" << endl;
    cin >> rainfall2;

    cout << "What is the name of the third month?" << endl;
    cin >> month3;
    cout << "How many inches of rain fell this month?" << endl;
    cin >> rainfall3;


        cout << "The average rainfall for " << month1 << ", " << month2 << " and " << month3 << " is " << (rainfall1+rainfall2+rainfall3)/3 << endl;

return 0;


}


