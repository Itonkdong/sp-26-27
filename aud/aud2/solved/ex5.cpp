/*
 * Exercise 5: Calculating Remainders
 * ==================================
 *
 * Description
 * -----------
 * Write a program that prints the remainders when
 * the number 19 is divided by 2, 3, 5, and 8.
 *
 * Input and Output
 * ----------------
 * No input is read.
 * The supplied number is 19.
 * Print one remainder for each divisor: 2, 3, 5, and 8.
 *
 * Source
 * ------
 * aud/presentations/2.html#exercise-5, section 8.5.
 */

#include <iostream>
using namespace std;

int main()
{
    int starting_number = 19;
    int num1 = 2;
    int num2 = 3;
    int num3 = 5;
    int num4 = 8;

    cout << starting_number << " divided by " << num1 << " has rem. of " << starting_number % num1 << endl;
    cout << starting_number << " divided by " << num2 << " has rem. of " << starting_number % num2 << endl;
    cout << starting_number << " divided by " << num3 << " has rem. of " << starting_number % num3 << endl;
    cout << starting_number << " divided by " << num4 << " has rem. of " << starting_number % num4 << endl;
}
