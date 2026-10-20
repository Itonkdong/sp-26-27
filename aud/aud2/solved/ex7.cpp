/*
 * Exercise 7: Performing Arithmetic Operations on Two Integers
 * ============================================================
 *
 * Description
 * -----------
 * Write a program that reads two integers from the standard input and prints
 * their sum, difference, product, and remainder when divided.
 *
 * Input and Output
 * ----------------
 * Read two integers x and y.
 * Print their sum, difference, product, and the remainder of x divided by y.
 * Use a nonzero y when testing the remainder operation.
 *
 * Source
 * ------
 * aud/presentations/2.html#exercise-7, section 8.7.
 */

#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;

    cin >> number1 >> number2;

    double sum = number1 + number2;
    double difference = number1 - number2;
    double product = number1 * number2;
    int remainder = number1 % number2;

    cout << "Sum of " << number1 << " and " << number2 << " is " << sum << endl;
    cout << "Difference of " << number1 << " and " << number2 << " is " << difference << endl;
    cout << "Product of " << number1 << " and " << number2 << " is " << product << endl;
    cout << "Remainder of " << number1 << " and " << number2 << " is " << remainder << endl;
}
