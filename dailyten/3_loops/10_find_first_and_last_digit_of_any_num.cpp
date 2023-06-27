#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int numb, last;

	cout << "Enter the number: " << endl;
	cin >> numb;

	last = numb % 10;

	cout << "Last digit of entered number is: " << last << endl;

	while ( numb >= 10)
	{
		numb = numb / 10;
	}	
	cout << "First digit of entered number is: " << numb;

	return 0;
}