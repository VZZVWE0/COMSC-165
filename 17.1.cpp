#include <iostream>
#include <fstream>

using namespace std;

int main () {

    ifstream inputFile;
    int number;

    inputFile.open("Removable Disk/Integers.txt");

while (inputFile >> number) {

    cout << number << endl;
}




inputFile.close();

return 0;
}
