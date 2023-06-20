#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char one[50], two[50], res[100];
	
	cout << "Enter 1st String: " << endl;
	cin.getline(one, 50);

	cout << "Enter 2nd String: " << endl;
	cin.getline(two, 50);

	//strcat is used to concatenate two strings;
	
	strcat(one,two);
	
	cout << "Reuslt is: " << one << endl;

	return 0; 
}