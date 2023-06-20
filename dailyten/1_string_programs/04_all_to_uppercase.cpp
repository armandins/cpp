#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char string2[50]; 

	cout << "Enter desired string(with a limit of 50 chars): " << endl;
	cin.getline(string2, 50);

	cout << "All in upper-case formatting: " << strupr(string2) << endl;

	return 0; 
}