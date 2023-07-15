// const -> an object that cannot be modified at compile time 
#include <iostream>

int main()
{
	// integer x cannot be modified 
	const int x {9};
	// let's try the example below 
	const int *p1 = &x;
	std::cout << p1 << std::endl;
	// what this one means is that the
	// data is contant, but the pointer isn't
	// therefore we can do the following without compilor error.
	p1++;
	std::cout << p1 << std::endl;

	int* const p2;
	// pointer is const, but data isn't
	const int* p3; 
	// meaning both data and pointer are constants
	// but how about this one: 
	int const *p4 = &x;
	// keep the following general rule in mind:
	//	if const is on the left-side of *, data is constant
	//	if const is on the right-side of *, pointer is constant



}