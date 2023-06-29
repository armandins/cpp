#include <iostream>
using namespace std;

int main()
{
	char moperator; // + , - , * , /
	double firstnum, secondnum;

	cin >> firstnum >> moperator >> secondnum;

	switch(moperator)
	{
		case '+': 
		{
			cout << firstnum + secondnum << endl;
			break;
		}
		case '-':
		{
			cout << firstnum - secondnum << endl;
			break;
		}
		case '*':
		{
			cout << firstnum * secondnum << endl;
			break;
		}
		case '/':
		{
			cout << firstnum / secondnum << endl;
			break;
		}
		default: 
		{
			cout << "Invalid Operator!" << endl;
		}
	}
}