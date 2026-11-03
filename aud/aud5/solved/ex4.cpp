/*
 * Exercise 4: Four-Digit Numbers with a Matching Digit Sum
 * ========================================================
 *
 * Description
 * -----------
 * Write a program that prints all four-digit numbers whose most significant
 * digit equals the sum of the three least significant digits.
 *
 * Examples
 * --------
 *     4 0 3 1: 4 = 0 + 3 + 1
 *     5131: 5 = 1 + 3 + 1
 *
 * Input and Output
 * ----------------
 * No input is read.
 * Print all matching four-digit numbers.
 *
 * Source
 * ------
 * aud/presentations/5.html#task-4, section 1.5.
 */

#include <iostream>
using namespace std;

int main()
{
    for (int number = 1000; number <= 9999; ++number)
    {
        int save = number;
        int sum = 0;
        for (int i = 0; i < 3; ++i)
        {
            sum += save % 10;
            save = save / 10;
        }
        if (save == sum)
        {
            cout << number <<" ";
        }
    }
    return  0;
}
