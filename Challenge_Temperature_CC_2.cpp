#include <iostream>

int main() {

	// Converting temperature from Farenheit to Celciusdouble tempf;
	double tempf;
	double tempc;

	// Ask the user
	std::cout << "Enter the temperature in Fahrenheit: \n";
	std::cin >> tempf;

	// Calculation of formula with proper spacing
	tempc = (tempf - 32) / 1.8;

	// Chaining
	std::cout << "The temp is " << tempc << " degrees Celsius.\n";

	// Main returns an integer of 0
	return 0;

}
