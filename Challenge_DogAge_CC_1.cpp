#include <iostream>

int main9() {

    // Declare variables
    int dogAge;
    int dogAgeFirst2;
    int dogAgeHumanYrs;

    // Get user to input age of dog
    std::cout << "Enter your dog's age here (in years) and it will be converted into human years: \n";
    std::cin >> dogAge;

    // If statement separating two sections of math
    if (dogAge == 0 || 1 || 2) {
        dogAgeFirst2 = dogAge;
        dogAgeFirst2 = 21;
    }
    else {
        dogAgeFirst2 = dogAge;
    }

    //Calculation and print
    dogAgeHumanYrs = dogAgeFirst2 + 4 * (dogAge - 2); // I guessed this first attempt! It works! (I do not understand the math, yes you heard me correctly)
    std::cout << "Your dog is " << dogAgeHumanYrs << "years old in human years.\n"; 
   
    return 0;
}