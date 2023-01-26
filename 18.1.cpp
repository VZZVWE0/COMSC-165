#include<iostream>

using namespace std;

int main( )
{
	char c_str[80];
    int words = 0;

	cout << "Enter a sentence and I will count the words: ";
	cin.getline(c_str,80);

	for(int i = 0; c_str[i] !='\0'; i++)
	{
		if (c_str[i] == ' ')
		{
			words++;
		}
	}

	cout << "There are " << words+1 << " words in the sentence." << endl;

	return 0;
}
