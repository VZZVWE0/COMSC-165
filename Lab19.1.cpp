#include <iostream>
#include <iomanip>

using namespace std;

struct Car {

    string carMake;
    string carModel;
    int yearModel;
    double cost;

};

int main () {

    const int NUM_CARS = 2;
    Car cars[NUM_CARS];
    int index;

for (index = 0; index < NUM_CARS; index++){

    cout << "Enter make of car " << (index+1);
    cout << ":";
    cin >> cars[index].carMake;
    cin.ignore();
    cout << "Enter model of car: ";
    cin >> cars[index].carModel;
    cin.ignore();
    cout << "Enter year model of car: ";
    cin >> cars[index].yearModel;
    cin.ignore();
    cout << "Enter the cost of the car: ";
    cin >> cars[index].cost;
    cin.ignore();

}
    cout << " " << endl;
    cout << "Make" << setw(10) << "Model" << setw(10)<< "Year" << setw(10) << "Cost" << endl;
    cout << " " << endl;
for (index=0; index < NUM_CARS; index++) {

    cout << cars[index].carMake << setw(10) << cars[index].carModel << setw(10) <<  cars[index].yearModel  << setw(10) << cars[index].cost << endl;

}
return 0;
}
