#include <iostream>
using namespace std;

int main()
{
	float cel, fahr;
	cout << "Enter Temp in Fahrenheits: " << endl;
	cin >> fahr;
	cel = (fahr - 32) * 5 / 9;
	cout << fahr << " Fahrenheits would be: " << cel << " Celsius" << endl;

	return 0;
}