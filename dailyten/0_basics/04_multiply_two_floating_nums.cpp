#include <iostream>
using namespace std;

int main()
{
	double num1, num2, mult;

	cout << "Enter 1st num: " << endl;
	cin >> num1;
	cout << "Enter 2nd num: " << endl;
	cin >> num2;

	mult = num1 * num2;

	cout << "Result is " << num1 << " x " << num2 << " = " << mult << endl;

	return 0;

}