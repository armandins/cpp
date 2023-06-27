#include <iostream>
using namespace std;

int main()
{
	int num, sum;
	cout << "Enter desired number:" << endl;
	cin >> num;

	for (int i = 1; i <= num; i+=2)
	{
		sum += i; 
	}

	cout << "result: " << sum << endl;
	
	return 0;


}