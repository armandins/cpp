#include <iostream>
using namespace std;

int main()
{
	int numb1;
	int numb2;
	int temp;

	cout << "Enter 1st number: " << endl;
	cin >> numb1;
	cout << "Enter 2nd number: " << endl;
	cin >> numb2;

	temp = numb1;
	numb1 = numb2;
	numb2 = temp; 

	cout << "After swapping value of 1st number is: " << numb1 << " and the value of 2nd number is: " << numb2 << endl;


	return 0; 
}