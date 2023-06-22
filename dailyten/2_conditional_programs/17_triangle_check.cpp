#include <iostream>
using namespace std;

int main()
{
	int anglea,angleb,anglec,sum;
	cout << "Enter 3 angles: " << endl;
	cin >> anglea >> angleb >> anglec;

	sum = anglea + angleb + anglec;

	if (sum == 180)
		cout << "Valid triangle!" << endl;
	else cout << "Invalid triangle!" << endl;

	return 0;
}