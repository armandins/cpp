#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num, sum, first, last;

	cout << "Enter the number: " << endl;
	cin >> num;

	last = num % 10;
	first = num;

	// but what if number is bigger than 10
	while ( num >= 10)
	{
		num = num / 10;
	}

	// if skipped while loop
	first = num;

	//find sum of first and last digit
	sum = first + last;

	//print sum
	cout << "Sum of first and last digits are: " << sum << endl;

	return 0;
}
