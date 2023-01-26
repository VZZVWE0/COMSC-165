#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main () {

srand(time(0));

int num;

cout << "Guess a number between 1 and 10" << endl;

int rn= rand()%10;

while (true){

cout << "Enter your guess: "<< endl;
cin >> num;

if (num==rn){
    cout << "Yes, the is the number!" << endl;
    break;
}
else if (num > rn){
    cout << "Your answer is too high." << endl;
}

else if (num < rn){
    cout << "You're number is too low." << endl;
}}

return 0;

}
