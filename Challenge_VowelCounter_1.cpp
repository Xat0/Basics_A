#include <iostream> 
#include <string>

using namespace std;

/*

Title: Count Vowels
Difficulty: 2
Description: Make a program which asks the user to enter in a string and then prints out how
many vowels are in that string. For example, the user enters “hello world” and it returns “There
are 3 vowels in ‘hello world’”.The Programmers Idea Book 21
Tips: Strings are typically thought of and used as an array of characters. If you can loop through
these characters one by one, you can compare them to a list of vowels. If you find one that
matches, increment a counter variable. After the loop is done, the counter will then contain your
count.
Added Difficulty: Count the consonants as well as spaces. Provide a mini report of all these
counts.

*/

int main() {
    
    //Stole from google. Going back down to Level 1 ideas and codecademy.

    //Initializing variable.
    char str[100];
    int i, vowels = 0;

    //Accepting input.
    cout << "Enter  the string : ";
    cin >> str;

    //Initializing for loop. 
    for (i = 0;str[i];i++)
    {
        //Counting the vowels.
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
    }

    //Printing the count of vowels.
    cout << "Total number of vowels in the string = " << vowels;


    return 0;
}