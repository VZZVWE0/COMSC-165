#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

srand(time(0));

const int SIZE=10;
int numbers[SIZE];
int i,j,n, temp;

    for(int i=0; i<SIZE; i++){

        numbers[i] = (rand()%100)+1;

        cout << numbers[i] << endl;
    }

    for(int i=0,j=SIZE-1;i<SIZE/2;i++,j--)
	{
		temp=numbers[i];
		numbers[i]=numbers[j];
		numbers[j]=temp;
	}

	cout<<"\nReverse array"<<endl;

	for(i=0;i<SIZE;i++)

		cout<<numbers[i]<< endl;


return 0;
}
