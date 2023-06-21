#include <iostream>
using namespace std;

int main()
{
	char ch; 

	cout << "Enter any character: " << endl;
	cin >> ch;

	if (ch >= 'a' && ch <= 'z')
	{
		cout << "A lowercase!";
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		cout << "An uppercase!";
	}
	else cout << "Not a character";

	return 0;
}