#include <iostream>
using namespace std;


int main()
{
	int days, weeks, years; 
	cout << "Enter the number of days: " << endl;
	cin >> days;

	years = days / 365; 
	weeks = ( days % 365 ) / 7;
	days -= ((years * 365) + (weeks * 7));

	cout << years << " Years,";
	cout << weeks << " Weeks,";
	cout << "And " << days << " Days.";

	return 0; 

}