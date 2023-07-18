/* How merge sort works O(nlog(n)): 
	for an array [a ... b]
1. If a = b, do not do anything, because a subarray that only contains one element
is already sorted.
2. Calculate the position of the middle element: k = ⌊(a + b)/2⌋.
3. Recursively sort the subarray array[a ... k].
4. Recursively sort the subarray array[k + 1 ... b].
5. Merge the sorted subarrays array[a ... k] and array[k + 1 ... b] into a sorted
subarray array[a ... b].
*/

// however never a good idea to sort functions in C++ using homemade functions.
// use C++ library's sort function
// STL sort function is O(nlog(n)) time complexity
 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{


	//sorting a vector
	vector<int> v {4, 2, 5, 3, 5, 8, 3};
	sort(v.begin(), v.end());

	cout << "sorted vec: ";
	for (auto &x : v)
	{
		cout << x << " ";
	}

	cout << "\n";
	//sorting an ordinary array
	int n = 7; // array size
	int a[] = {4, 2, 5, 3, 5, 8, 3};
	sort(a, a+n);

	cout << "sorted array: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	//sorting strings
	string s = "monkey";
	sort(s.begin(), s.end());
	cout << "sorted string: " << s << "\n";
	

}

