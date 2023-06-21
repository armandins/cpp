#include <iostream>

int main()
{
	int year; 

	cout << "Enter Year: " << endl;
	cin >> year;


	(year%4==0 && year%100!=0) ? printf("%d is leap year",year) :

    (year%400 ==0 ) ? cout << "Leap year" : cout<< year << " is not leap year";

    return 0;
}