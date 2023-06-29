#include <iostream>
using namespace std;

int main()
{
	int num;
	int product = 1;

	cin >> num;

	while( num != 0)
	{
		product *= (num % 10);
		num /= 10;
	} 

	cout << product << endl;
}