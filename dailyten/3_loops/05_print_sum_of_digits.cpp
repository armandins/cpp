#include <iostream>
using namespace std;

int main()
{
	int numb, total;

	cout << "Enter a number:" << endl;
	cin >> numb;

	for (total = 0; numb > 0; numb = numb/10)
		total += (numb % 10);

	cout << "Sum of digits: " << total;

	return 0;
}