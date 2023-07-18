// bubble sort - O(n^2) time complexity.
#include <iostream>
using namespace std;

int main()
{
	int unsorted[] = {1, 3, 8, 2, 9, 2, 5, 6};
	int n {8};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (unsorted[j] > unsorted[j + 1])
			{
				swap(unsorted[j], unsorted[j+1]);
			} 
		}
	}

	// print unsorted after using bubble sort
	for (auto k : unsorted)
	{
		cout << k << " ";
	}
	
	return 0;
}