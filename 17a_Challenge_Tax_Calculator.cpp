/*

Title: Tax Calculator
Difficulty: 1
Description: Create a program which asks the user to enter in a dollar value and the current tax
percentage. Then print out the subtotal along with the total plus tax (grand total).
Tips: This is a very simple program where you collect the value from the user, have the user
enter in a tax value, add the tax to the total and print out the result. If the value the user enters is
$1.00 and the tax is 5% then the total is $1.05.
Added Difficulty: Build a GUI for this program where the user can enter in multiple prices, adds
them up and then calculates the tax. Perhaps some of the items won’t be taxed based on the
item type (like food).

*/

#include <iostream> 
#include <cmath>

using namespace std;

int main17() { 

	double income;
	double tax; 

	cout << "Enter in your taxable income: " << endl;
	cin >> income; 
	tax = income * 0.2;
	cout << "You will owe " << tax << " to the government in taxed income" << endl;



	return 0;
}