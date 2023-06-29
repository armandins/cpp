#include <iostream>
using namespace std;

int main()
{
	int num; 
	cin >> num;

	switch(num % 2)
	{
		case 0:
		{
			cout << "You entered an even number!";
			break;
		}
		case 1:
		{
			cout << "You etered an odd number!";
			// don't need break since it's the last case in here anyway.
		}
	}

}