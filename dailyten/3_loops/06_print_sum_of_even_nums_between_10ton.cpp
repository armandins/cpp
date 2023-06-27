#include <iostream>
using namespace std;

int main()
{
	int num, sum;

	cout << "Enter any number: " << endl;
	cin >> num;

	for (int i = 2; i <= num; i+=2)
	{
		sum += i;
	}

	cout << "Sum of all even numbers between 1 and " << num << ": " << sum;

	return 0;

}