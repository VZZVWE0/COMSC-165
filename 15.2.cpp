#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {

srand(time(0));

ofstream outputFile;

outputFile.open("Nums.txt");

if (outputFile.fail()) {
    cout << "Error opening file." << endl;
}


else {
    int num;
    for (int i=0; i <10; i++) {
    num=rand()%100;
    outputFile << num << endl;

    }
}

outputFile.close();

outputFile.open("Nums.txt",ios::app);
if (outputFile.fail()) {
    cout << "Error opening file." << endl;
}


else {
    int num;
    for (int i=0; i <10; i++) {
    num=rand()%100;
    outputFile << num << endl;

    }
}

return 0;

}
