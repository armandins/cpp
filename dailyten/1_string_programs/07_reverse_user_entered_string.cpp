#include <iostream>
#include <string.h>
// maximum size of the string needs to be defined here or it doesn't idk
#define MAXSIZE 100
using namespace std;

int main()
{

	int i, j, length;
	char string[MAXSIZE];
	char reversed[MAXSIZE];

	cout << "Enter a string: ";
	cin >> string;

	length = strlen(string);
	j = 0;
	
	for (i = length - 1; i >= 0; i--)
	{
		reversed[j] = string[i];
		j++;
	}
	
	reversed[j] = '\0';

	cout << reversed;

	return 0;
}