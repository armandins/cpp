#include <iostream>
using namespace std;

int main()
{
	char gender; 
	cout << "enter your gender ( m or f ): " << endl;
	cin >> gender;

	switch(gender)
	{
		case 'm':
		{
			cout << "You are a male.";
			break;
		}
		case 'f':
		{
			cout << "You are a female.";
		}
	}
}