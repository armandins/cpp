#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num, first, last, temp, swap, count;

	cout << "Enter a number:" << endl;
	cin >> num;

	temp = num;
	last = temp % 10;
	count = (int)log10(temp);

	while (temp >= 10)
	{
		temp /= 10;
	}
	
	first = temp;
	swap = (last * pow(10, count) + first) + (num - (first*pow(10, count) + last));
	
	cout << "Last digit: " << last << endl;
	cout << "First digit: " << first << endl;
	cout << num << " is swapped to " << swap; 	
	return 0;
}