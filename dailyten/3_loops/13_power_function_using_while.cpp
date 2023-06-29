#include <iostream>
using namespace std;

int main()
{
	int base,exp,pow,i;

	cin >> base >> exp;
	pow = 1;
	i = 1; 

	while ( i <= exp )
	{
		pow *= base;
		i++;
	}

	cout << pow << endl;

}