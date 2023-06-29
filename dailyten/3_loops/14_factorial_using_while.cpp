#include <iostream>
using namespace std;

int main()
{
	int num, i;
	long long fact = 1;

	cin >> num;

	fact = 1; 
	i = 1;

	while ( i <= num )
	{
		if (i != 0 || i != 1)
		{
			fact *= i;
			i++;
		}
		else cout << "1" << endl;
	}

	cout << fact << endl;
}
