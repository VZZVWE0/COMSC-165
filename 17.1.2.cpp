#include <iostream>
#include <fstream>

using namespace std;

int a = 10;
int sum = 0;
int c=0;
int d=0;
int e=0;
double average;
int num[a];

ifstream finput;

fin.open("Integers.txt");

for (int i=0; i<a; i++) {

    fin >> num[i];
}

for (int i=0; i<a; i++) {

    sum+=num[i];
}

average=sum/10;

for (int i=0; i<a; i++) {

    if(num[i]>average){

        d++;
    }
    else if (num[i]<average){
        e++;
    }
    else if (num[i]==average){
        c++;
    }


}

cout << "The average is " << c << endl;
cout << "The numbers above the average is "<< d << endl;
cout << "The numbers below the average is "<< e << endl;

return 0;

}

