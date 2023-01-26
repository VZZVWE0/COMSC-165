#include <iostream>

using namespace std;

int main() {

string sentence;

cout << "Enter a sentence with no spaces: " << endl;
cin >> sentence;


for (int i=1; i<sentence.length(); i++) {

    if (isupper(sentence[i])) {

        sentence[i]=tolower(sentence[i]);

        sentence.insert(i," ");
                            }
                                        }

cout << sentence <<endl;

return 0;

}
