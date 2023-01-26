#include <iostream>

using namespace std;

int main()
 {
    const int MIN_NUMBER = 1, MAX_NUMBER = 20;

    int num;

    cout << "Celsius to Fahrenheit" << endl;
    cout << "-----------------------" << endl;

    for (num = MIN_NUMBER; num <=MAX_NUMBER; num++)
        cout << num << "\t\t" << (1.8*num+32) << endl;


    return 0;

 }
