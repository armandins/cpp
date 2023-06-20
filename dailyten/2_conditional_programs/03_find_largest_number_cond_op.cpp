/* CONDITIONAL OPERATOR EXAMPLE */
#include <iostream>
using namespace std;

int main() 
{
	int n1, n2, n3, largest;
	cout << "Enter three numbers (divide by space) : " << endl;
	cin >> n1 >> n2 >> n3;

	// in this example we use conditional operator
	largest = n1 > n2 ? ( n1 > n3 ? n1 : n3) : ( n2 > n3 ? n2 : n3);
	// what it basicaly says is 
	// compare n1 and n3, and compare n2 and n3; then compare the result of the two
	cout << "Largest number is: " << largest << endl;

	return 0;
}