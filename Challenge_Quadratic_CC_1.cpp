#include <iostream>
#include <cmath>


int main8() {

	// The official Codecademy answer

	// Variables
	double a, b, c;
	double root1, root2;

	// User input
	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "Enter c: ";
	std::cin >> c;

	// Calculation with formula
	root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
	root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

	// Output
	std::cout << "Root 1 is " << root1 << "\n";
	std::cout << "Root 2 is " << root2 << "\n";

	return 0;
}