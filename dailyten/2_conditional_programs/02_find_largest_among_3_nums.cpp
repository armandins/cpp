#include <iostream>
using namespace std; 

int main()
{
	int a, b, c;
	cout << "Enter 3 integers: " << endl;
	cin >> a >> b >> c;

	if (a >= b && a >= c)
		cout << a << " is the biggest number!" << endl;

	else if (b >= a && b >= c)
		cout << b << " is the biggest number!" << endl;

	else if (c >= a && c >= b)
		cout << c << " is the biggest number!" << endl;


	return 0;
}