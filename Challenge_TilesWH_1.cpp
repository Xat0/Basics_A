#include <iostream>
#include <string>

using namespace std;

/*

Title: Find Cost of Tile to Cover W x L Floor

Difficulty : 1

Description : Ask the user to enter in a width, lengthand the cost per 1 unit of flooring.Have the
program calculate how much it would cost to cover the area specified with the flooring.
Tips : This is a relatively simple program.Be sure to first find out how much area the floor is and
then multiply that by the cost per unit of flooring.Start with some simple numbers that you can
quickly calculate in your head.Try a 10 x 10 ft room with each unit of flooring costing $1.00.

Added Difficulty : Calculate how much flooring would be needed for non - rectangular rooms.Also
figure out how much labor costs would be given that the average flooring team can only put in
20 square feet of flooring per hour at a cost of $86.00 / hr

*/

int main11() {

	double width;
	double length;
	double laborCostPerUnit;
	double totalCost;
	char flagRectangle;
	char flagTriangle;
	double triSide1;
	double triSide2;
	double triSide3;
	double triPerimeter;
	double totalCostTri; 
	double areaHerons;
	const double pi = 3.14159;
	double circleRadius;
	double circleArea;
	double totalCostCircle; 


	cout << "Is the area rectangular? Type Y for yes and N for no" << endl;
	cin >> flagRectangle;
	flagRectangle = toupper(flagRectangle);
	cout << "You have chosen " << flagRectangle << endl;

	if (flagRectangle == 'Y') {
		cout << "Enter the labor cost: " << endl;
		cin >> laborCostPerUnit;
		cout << "The labor cost is " << laborCostPerUnit << endl;
		cout << "Enter the width: " << endl;
		cin >> width;
		cout << "The width is " << width << endl;
		cout << "Enter the length " << endl;
		cin >> length;
		cout << "The length is " << length << endl << endl;
		cout << "Calculating... " << endl;
		totalCost = (width * length) * laborCostPerUnit;
		cout << "The total cost with these paramters is " << totalCost << "dollars." << endl;
	}

	else if (flagRectangle == 'N') {
		cout << "Is the area a triangle? Type Y for yes and N for no" << endl;
		cin >> flagTriangle;
		flagTriangle = toupper(flagTriangle);

		if (flagTriangle == 'Y') {
			cout << "Enter the labor cost: " << endl;
			cin >> laborCostPerUnit;
			cout << "The labor cost is " << laborCostPerUnit << endl;
			cout << "Enter the first side's length: " << endl;
			cin >> triSide1;
			cout << "Side 1 is " << triSide1 << endl;
			cout << "Enter the second side's length " << endl;
			cin >> triSide2;
			cout << "Side 2 is " << triSide2 << endl;
			cout << "Enter the third side's length: " << endl;
			cin >> triSide3;
			cout << "Side 3 is " << triSide3 << endl;
			cout << "Calculating... " << endl;
			triPerimeter = 0.5 * (triSide1 + triSide2 + triSide3);
			areaHerons = sqrt(triPerimeter * (triPerimeter - triSide1) * (triPerimeter - triSide2) * (triPerimeter - triSide3));
			cout << "The area of the triangular area is " << areaHerons << "square units." << endl;
			cout << "The total cost with these parameters is " << (areaHerons * laborCostPerUnit) << "dollars" << endl;
		}

		else {
			cout << "You've chosen a circular area" << endl;
		}
	}

	else if (flagRectangle == 'N' && flagTriangle == 'N') {
		cout << "Circular area. Please enter the radius of the circle: " << endl;
		cin >> circleRadius; 
		cout << "Enter the labor cost: " << endl;
		cin >> laborCostPerUnit;
		cout << "Calculating..." << endl;
		circleArea = pi * (circleRadius * circleRadius);
		cout << "The area of the circle is " << circleArea << "units squared." << endl;
		totalCostCircle = laborCostPerUnit * circleArea;
		cout << "The cost of the circle area is " << totalCostCircle << endl;


	}

	else {
		cout << "ERROR";
	}

	// Changing code 1.

	return 0;

}