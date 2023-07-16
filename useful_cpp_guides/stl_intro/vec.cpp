/* Reasons to C++ Standard Library: 
	1. Code reuse, no need to re-invent the wheel. 
	2. Efficieny, Accuracy
	3. Terse, readable code
	4. Standardization, guaranteed availability
	5. Good knowledge of data structures and algorithms
*/
/* Containers 
	Sequence Containers : Vector, Deque, List, Forward List, Array
	Associative Containers ( Binary Tree ) : Set, Multi-set, Map, Multi-map 
	Unordered Containers ( Hash Table ) : Unordered Set / Multi-set , Unordered Map, Multi-map
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec; // vec.size() == 0 
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(8); 
	// vec: {4 , 1 , 8} , vec.size() == 3

	std::cout << vec.front() << '\n'; // vec.front == 4
	std::cout << vec.back() << '\n'; // vec.back == 8

	std::vector<int>::iterator itrbegin = vec.begin();
	std::vector<int>::iterator itrend = vec.end();

	for (std::vector<int>::iterator itr = itrbegin; itr!= itrend; itr++)
	{
		std::cout << *itr << " "; // Print out : 4 1 8	}
	}

	sort(itrbegin, itrend); // vec : {1, 4, 8}
	
	for (std::vector<int>::iterator itr = itrbegin; itr!= itrend; itr++)
	{
		std::cout << *itr << " "; // Print out : 4 1 8	}
	}

	// Keep in mind for std::vector<int> vec{n}:
	// vec.begin == vec.at(0) -> defined!
	// vec.end == vec.at(n + 1) -> undefined! 

	// Vector Specific Operations 

	std::cout << vec[2]; // no range check
	std::cout << vec.at(2); // range check

	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";

	// universal, meaning can use the same format for deque, list, etc.
	for (std::vector<int>::iterator itr = itrbegin; itr!= itrend; itr++)
	{
		std::cout << *itr << " "; // Print out : 4 1 8	}
	}

	//for (it: vec) // C++ 11 
	//{
	//	std::cout << it << " ";
	//}

	//Common Member Functions of All Containers 
	// vec: {4, 1, 8}


	// ----------------------- 
	// ------------------------
	// ---------- Note ---------
	// --------------------------

	// Can also iterate through vectors using commands below 
	// Initiate vectest; 
	
	std::vector<int> vectest{3};
	for (auto &x : vectest)
		std::cin >> x;

	// ----------------------- 
	// ------------------------
	// ---------- Note ---------
	// --------------------------


	if (vec.empty()) { std::cout << "Not Poossible\n";}

	std::cout << vec.size(); // vec.size() == 3

	std::vector<int> vec2(vec); // Copy Constructor, vec2 = {4, 1, 8}; 

	vec.clear(); // Remove all elements

	vec2.swap(vec); // Vec2 becomes empty, vec = {4, 1, 8}

	/* Properties of Vectors: 
		1. Fast insert/remove at the end; O(1)
		2. But slow insert/remove at the beggining or the middle; O(n)
		3. Slow search; O(n) 
	*/
}

