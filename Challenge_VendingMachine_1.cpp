/*

Title: Change Return Program
Difficulty: 2
Description : Create a program where it shows the user a list of items to buy and their price.
Then ask the user to pick an item and enter in the amount of money they would have inserted
into the “vending machine”.Have the program calculate the change and return it to the user in
the form of quarters, dimes, nickelsand pennies.For example, if the user chooses an item that
costs $1.25 and they say they give it $2.07 the program would print out 3 quarters, 1 nickel and
2 pennies as change for the user

// ^Only from the book. I'm trying this out by myself from hereonin.

// Bonus: Auto-Capitalise Inputs
// Bonus: Allow for changings of choices and restarting of program.
// Bonus: Have certain amount of stock for each listed item?
// Bonus2: Convert to AUD and print out with aus coinage and rounding

*/

#include <iostream>
#include <string>

using namespace std;

int main10() {

	// Variables (can't remember arrays or cases)
	double item1, item2, item3, item4, item5, item6, item7, item8, item9, item10, item11, item12, item13;
	double cash;
	double calculation;
	string number;
	char choice; 
	bool confirm;
	string a;

	// Initialised Variables
	item1 = 16800, item2 = 349.95, item3 = 100, item4 = 75.75, item5 = 64.29, item6 = 50, item7 = 19.99, item8 = 12.32, item9 = 8.88, item10 = 7.6, item11 = 5.2, item12 = 2.3, item13 = 0.89;


	// Items listed at shop:
	// Pokemon Crystal GameBoy Colour Cartridge, Thousand-Eyes Restrict Yugioh Card, Shovel, Broom Handle, Shiraz Red Wine, Baby Yoda Plushie, Spare Cords,
	// Macadamia Nuts 500g, Ute, Methamphetamine 100, External Hard Disk Drive 2TB, Pencil, Kat-Kit Chocolate Bar. 

	// Shop List:
	cout << "### SHOP                                                 " << endl;
	cout << "##1 Ute                                      - $16,800.00" << endl;
	cout << "##2 External Hard Disk Drive                 -    $349.95" << endl;
	cout << "##3 Methamphetamine Small Bag                -    $100.00" << endl;
	cout << "##4 Pokemon Crystal GameBoy Colour Cartridge -     $75.75" << endl;
	cout << "##5 Thousand-Eyes Restrict Yugioh Card       -     $64.29" << endl;
	cout << "##6 Shovel                                   -     $50.00" << endl;
	cout << "##7 Shiraz Red Wine                          -     $19.99" << endl;
	cout << "##8 Baby Yoda Plushie                        -     $12.32" << endl;
	cout << "##9 Macadamia Nuts                           -      $8.88" << endl;
	cout << "#10 Broom Handle                             -      $7.60" << endl;
	cout << "#11 Kat-Kit Chocolate Bar                    -      $5.20" << endl;
	cout << "#12 Pencil                                   -      $2.30" << endl;
	cout << "#13 Spare Cords                              -      $0.89" << endl;
	cout << " " << endl;

	// User input - pick an item with the corresponding number like a vending machine

	cout << "Buy an item by entering the item number:" << endl;
	cin >> number;
	cout << "You chose " << number << ". Is this correct? Y for Yes, N for No and restart." << endl;
	cin >> choice;

	// If statement
	if (choice == 'Y') {
		confirm = true;
	}
	else {
		confirm = false;
	}
	if (confirm == true) {
		cout << "You have confirmed " << number << " as your choice." << endl;
		cout << "Processing..." << endl;
		number;
	}
	else {
		cout << "Please restart this program if you wish to redo." << endl;
	}

	/* Erroneous trash
	
	a = choice;
	cout << "Your selection is " << a << endl;
	
	if (a == number || a == !number) {

	}
	*/

	system("pause");

	// Calculation
	cout << "Enter payment: " << endl;
	cin >> cash;
	cout << "You have entered " << cash << " dollars. Calculating change... " << endl;
	//calculation = cash - ;


	return 0;


}