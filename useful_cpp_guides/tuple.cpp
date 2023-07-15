#include <iostream>
#include <tuple>
#include <vector>
#include <string>
// tuple can store n volues which are of different types
// and is able to return more than one value from a func.
std::tuple<int, int, std::string> tupleReturn(int a, int b)
{
	return {a + b, a - b, "return String"};
}
// another approach in order to return several values
// from a func is using vectors. 
std::vector<int> vectorReturn()
{
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
}

int main()
{
	// initialize
	int x {10};
	int y {6};
	// unpack the tuple tupleReturn
	auto [total, difference, retstr] = tupleReturn(x, y);
	// print the unpacked values ( total and difference)
	std::cout << "Total: " << total << std::endl;
	std::cout << "Difference: " << difference << std::endl;
	std::cout << "Return String: " << retstr << std::endl;

	//vector 
	std::vector<int> returnedVector = vectorReturn();

	for (int value : returnedVector)
	{
		std::cout << value << std::endl;
	}
	
	return 0;




}