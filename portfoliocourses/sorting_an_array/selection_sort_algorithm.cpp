// an algorithm to sort integers of an unsorted array
// Prof. Kevin Brownee
// Arman Dindar Safa

// how the selection sort algorithm works:

// array : 6, 5, 3, 2, 1, 4

// step1 : 1, 5, 3, 2, 6, 4

// step2 : 1, 2, 3, 5, 6, 4

// step3 : 1, 2, 3, 5, 6, 4

// step4 : 1, 2, 3, 4, 6, 5

// step5 : 1, 2, 3, 4, 5, 6

#include <iostream>

void selection_sort(int a[], int length);

int main()
{
	int a[] = {6, 5, 3, 2, 1, 4};
	int length = 6;

	selection_sort(a, length);

	for (int i = 0; i < length; i++)
	{
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}

	return 0;
}

void selection_sort(int a[], int length)
{
	// no need to examine the last index so length - 1
	// Loop through each index of the array, as we do so the elements < i are 
  	// considered the sorted portion of the array, and the elements >= i are 
  	// considered the unsorted portion of the array.  The algorithm repeatedly 
  	// finds the minimum element in the unsorted portion of the array and if 
  	// necessary swaps it with the element at index i, increasing the portion 
  	// of the sorted array with each iteration.
	for (int i = 0; i < (length - 1); i++)
	{
	
		// find the position of the minimum element in the unsorted portion of 
    	// the array  
		int min_pos = i;
		for (int j = i+1; j < length; j++)
		{

			if (a[j] < a[min_pos])
			{
				min_pos = j;
			}
		}
		// if that element is NOT the element at index i, then swap that element 
    	// with the element at index i    
		if (min_pos != i)
		{
			int temp = a[i];
			a[i] = a[min_pos];
			a[min_pos] = temp;
		}
	}
}