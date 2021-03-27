#include <iostream>

int main4() {
	
	// Converting temperature from Farenheit to Celcius
	
	// Initializing variables 
	double tempf = 100;
	double tempc;

	// Calculation with formula
	tempc = (tempf - 32) / 1.8;

	// Chaining
	std::cout << "The temp is " << tempc << " degrees Celsius." << std::endl;

	return 0;
}