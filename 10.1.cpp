#include <iostream>
using namespace std;

int main () {

while (true)
{
    int num;

    cout << "Please enter a value for a month:" << endl;
    cin >> num;

if (num >= 1 && num <=12){
        cout << "That is a valid input." << endl;
        break;
    }
else {

        cout << "That is an invalid input, try again!";
    }

}
return 0;
}
