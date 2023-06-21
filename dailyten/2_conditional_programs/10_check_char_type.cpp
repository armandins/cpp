#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter any char: " << endl;
	cin >> ch;

	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
		cout << "It's an alphabet!" << endl;
	}

	else if (ch >= '0' && ch <= '9')
	{
		cout << "It's a number!" << endl;

	}
	else cout << "It's a special char!" << endl;

	return 0; 
}