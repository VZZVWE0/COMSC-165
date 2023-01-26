#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main () {

string number, name, gender;
double grade;

ofstream outputFile;

outputFile.open ("studentData.txt");

if (outputFile.fail()) {
        cout << "ERROR" << endl;
        }
else {
    for (int i = 1; i <= 2 ; i++){

        cout << "ID Number: " << endl;
        cin.ignore();
        cin>>grade;

        cout << "Name: " << endl;
        cin.ignore();
        getline(cin,name);

        cout << "Gender: " << endl;
        cin>>gender;

        cout << "GPA: " << endl;
        cin>>grade;

outputFile << number << setw(5) <<  setw(5) << name <<  setw(5) << gender <<  setw(5) << grade << endl;
        }
}
outputFile.close();

return 0;
}
