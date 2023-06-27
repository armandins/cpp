#include <iostream>
using namespace std;

int main()
{
	int numb = 0;
	cout << "Enter desired number: " << endl;
	cin >> numb;

	for (int i = numb; i >= 1; i--)
	{
		cout << i << "\t";
	}

	return 0;
}