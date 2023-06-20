#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char string1[50];

	cout << "Write down a string to convert to only lower case letters: " << endl;
	cin.getline(string1, 50);

	cout << "Character in lower case is: " << strlwr(string1) << endl;

	return 0; 
}