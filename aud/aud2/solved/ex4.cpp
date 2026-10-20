/*
 * Exercise 4: Calculating an Arithmetic Mean
 * ==========================================
 *
 * Description
 * -----------
 * Calculate the arithmetic mean of the numbers 3, 5, and 12.
 *
 * Input and Output
 * ----------------
 * No input is read.
 * The supplied numbers are 3, 5, and 12.
 * Print their arithmetic mean.
 *
 * Source
 * ------
 * aud/presentations/2.html#exercise-4, section 8.4.
 */

#include <iostream>
using namespace std;

int main()
{
    int number1 = 3;
    int number2 = 5;
    int number3 = 12;
    double result = (number1 + number2 + number3) / 3.0;
    cout << result;
}
