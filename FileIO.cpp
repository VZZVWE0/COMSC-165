#include <iostream>
#include <fstream>

using namespace std;

int main () {

ofstream opFile;
ifstream ipFile;

string names;
int i = 1;

ipFile.open("in.txt");

if (ipFile.fail()){

    cout << "Error opening file!" << endl;

}

while(getline(ipFile, names)) {

    cout << i << ". " << names <<endl;
    i++;
}

ipFile.close();

return 0;

}

