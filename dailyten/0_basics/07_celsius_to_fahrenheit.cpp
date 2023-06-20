#include <iostream>
using namespace std;

int main()
{
	float cel, fahr;
	cout << "Enter Cel. Temp: " << endl;
	cin >> cel;
	fahr = (1.8 * cel) + 32;
	cout << cel << " Celsius would be: " << fahr << " Fahrenheits" << endl;

	return 0;
}