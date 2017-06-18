#include <iostream>
template <class T>									// function template
T abs(T n)
{
	return n < 0 ? -n : n;
}
int main() {

	int int1 = 5;
	int int2 = -6;
	long long1 = 70000;
	long long2 = -80000;
	double double1 = 9.95;
	double double2 = -10.15;


	// call instantiate functions
	std::cout << "abs(" << int1 << ")=" << abs(int1) << std::endl;		// abs(int)
	std::cout << "abs(" << int2 << ")=" << abs(int2) << std::endl;		// abs(int)
	std::cout << "abs(" << long1 << ")=" << abs(long1) << std::endl;		// abs(int)
	std::cout << "abs(" << long2 << ")=" << abs(long2) << std::endl;		// abs(int)
	std::cout << "abs(" << double1 << ")=" << abs(double1) << std::endl;	// abs(int)
	std::cout << "abs(" << double2 << ")=" << abs(double2) << std::endl;	// abs(int)



	return 0;
}