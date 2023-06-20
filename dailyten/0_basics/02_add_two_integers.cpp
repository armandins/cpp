#include <iostream>
using namespace std;

int main()
{
	double number1 = 0;
	double number2 = 0;
	double sum = 0;

	cout << "Enter 1st number: " << endl;
	cin >> number1;

	cout << "Enter 2nd number: " << endl; 
	cin >> number2;

	sum = number1 + number2;

	cout << "Sum of two numbers are: " << sum;

	return 0;

}