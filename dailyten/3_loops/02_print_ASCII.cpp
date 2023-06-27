#include <iostream>
using namespace std;

int main()
{
	cout << "Printing ASCII values for all uppercase letters:" << endl;

	for (char c = 'A'; c <= 'Z'; c++)
	{
		cout << c << " ASCII Value is: " << int(c) << endl;
	}

	return 0;
}