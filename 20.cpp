#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

srand(time(0));

const int SIZE=100;
int numbers[SIZE];

    for(int i=0; i<SIZE; i++){

        numbers[i] = (rand()%100)+1;

        cout << numbers[i] << endl;
    }

return 0;
}
