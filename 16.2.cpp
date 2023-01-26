#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int SearchArray(int arr[], int SIZE, int num);


int main () {

int num;

srand(time(0));

const int SIZE=10;
int numbers[SIZE];
int i,j,n, temp;
int arr;

    for(int i=0; i<SIZE; i++){

        numbers[i] = (rand()%100)+1;

        cout << numbers[i] << endl;
    }


cout << "Enter number to search: " << endl;
cin >> num;



return 0;
}

int SearchArray(int arr, int SIZE, int num)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (arr == num) {

            return i;

    }
    return -1;

}}
