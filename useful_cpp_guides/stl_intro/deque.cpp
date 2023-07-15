/* 
	Biggest difference between vector and deque is: 
	Vector can only grow from the end but deque can grow from both sides. 
*/

#include <iostream>
#include <deque>
#include <algorithm>

int main()
{
	std::deque<int> deq {4, 6, 7};

	deq.push_front(2); // deq = {2, 4, 6, 7}
	deq.push_back(3); // deq = {2, 4, 6, 7, 3}

	// Deque has similar interface with vector
	std::cout << deq[1]; // deq[1] = 4

}

/* Properties
	1. Fast insert/remove at the beggining and the end
	2. Slow insert/remove at the middle; O(n)
	3. Slow search: O(n)
*/
