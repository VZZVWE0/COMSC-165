#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void additionProblem(int num1, int num2)
{
  int userAnswer;
  cout << "\n\n\n      " << num1 << " + " << num2 << " = ";
  cin >> userAnswer;
  cin.ignore(1000, 10);

  int theAnswer = num1 + num2;
  if (theAnswer == userAnswer)
    cout << "      Correct!" << endl;
  else
    cout << "      Very good, but a better answer is " << theAnswer << endl;

}
int main() {

int num1,num2;
srand(time(0));

for (int i=1; i<=5; i++){



num1=rand()%10;
num2=rand()%10;

additionProblem (num1,num2);
}
return 0;
}


