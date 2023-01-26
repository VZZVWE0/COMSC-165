#include <iostream>
#include <iomanip>

using namespace std;

struct StudentRecords {

        string name;
        string address;
        string city;
        string state;
        int zip;
        string gender;
        int studid;
        double gpa;

};

int main () {

    const int STUDENTS = 1;
    StudentRecords info[STUDENTS];
    int index;

for (index = 0; index < STUDENTS; index++){

    cout << "Enter info for Student " << (index+1) << endl;
    cout << " " << endl;

    cout << "Name: ";
    getline(cin,(info[index].name));
    cout << "Address: ";
    getline(cin,info[index].address);
    cout << "City: ";
    getline(cin,info[index].city);
    cout << "State: ";
    getline(cin, info[index].state);
    cout << "Zip: ";
    cin >> info[index].zip;
    cout << "Gender: ";
    cin >> info[index].gender;
    cout << "Student ID: ";
    cin >> info[index].studid;
    cout << "GPA: ";
    cin >> info[index].gpa;
    cin.ignore();
    cout << " " << endl;
}

for (index=0; index < STUDENTS; index++) {

    cout << "Info for Student " << (index+1) << endl;
    cout << " " << endl;

    cout << "Name: " << info[index].name << endl;
    cout << "Address: " << info[index].address<< " " << info[index].city << ", " << info[index].state << " " << info[index].zip << endl;
    //cout << "City: " <<  << endl;
    //cout << "State: " << info[index].state << endl;
    //cout << "Zip: " << info[index].zip << endl;
    cout << "Gender: " << info[index].gender << endl;
    cout << "Student ID: " << info[index].studid << endl;
    cout << "GPA: " << info[index].gpa << endl;

}
return 0;
}

