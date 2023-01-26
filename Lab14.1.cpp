#include <iostream>
#include <fstream>

using namespace std;

int main () {

ofstream opFile;

opFile.open("in.txt");

opFile << "George Washington" <<endl;
    opFile << "John Adams" <<endl;
        opFile << "Thomas Jefferson" <<endl;
            opFile << "James Monroe" <<endl;
                opFile << "James Madison" <<endl;
                    opFile << "John Quincy Adams" <<endl;


opFile.close();

return 0;

}
