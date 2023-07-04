// algorithm: https://en.wikipedia.org/wiki/Insertion_sort
// an algorithm to sort small arrays of integers
// Prof. Kevin Brownee
// Arman Dindar Safa

#include <iostream>
#include <string>

void insertion_sort(int a[], int length);

int main()
{
	int a[] = {8, 2, 7, 4, 5, 1, 9, 3};
	int length = 8;
	std::cout << length << std::endl;

	insertion_sort(a, length);

	for (int i = 0; i < length; i++)
	{
		std::cout << "a[" << i << "] = " << a[i] << std::endl; 
	}

	return 0;	

}

void insertion_sort(int a[], int length)
{
	// i starting at 1 because we consider a[0] to be already sorted.
	// The outer loop examines each 'key' element on the right-hand unsorted.

	for (int i = 1; i < length; i++)
	{
		int key = a[i];
		// comparing key to j = i - 1
		//We use the inner loop to do this, using the counter variable
    	// j to keep track of our index in the left-hand sorted portion of the 
    	// array, which is initially j-1, the index one to the left of the 
    	// current key. 
		int j = i - 1; 
		while(j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j -= 1;
		}
		// The above loop will either stop when j = -1 and we have reached the 
    	// start of the array (in which case we insert the key here 
    	// as a[-1 + 1] = a[0] which will be assigned the key), OR the loop above
    	// stops when a[j] <= key, in which case the key value should be placed 
    	// at the index j + 1, i.e. the index one to the right of the value at a[j].
		a[j + 1] = key;
	}
}