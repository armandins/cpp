#include <iostream>
using namespace std;

int main()
{
	int numb, i;

	cout << "Enter desired number:" << endl;
	cin >> numb;

	for(i = 1; i <= 10; i++)
	{
		cout << numb << " x " << i << " = " << numb*i << endl; 
	}

	return 0;
}