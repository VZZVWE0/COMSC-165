#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main () {


ofstream opFile;
string filename;

cout << "Please, enter the name of the file: " << endl;
cin >> filename;

opFile.open (filename.c_str());

if (opFile.fail()){

    cout << "Error opening file!" << endl;

}


else {


    opFile << "Books" << setw(10) << 39.95 << endl;
    opFile << "CDs" << setw(10) << 3.22 << endl;
    opFile << "Pens" << setw(10)	<< 1.08 << endl;
    opFile << "Pencils"	<< setw(10) << .99 << endl;


}

opFile.close();

return 0;

}
