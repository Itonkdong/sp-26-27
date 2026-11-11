/*
 * Exercise 2: Divisibility by the Sum of Two-Digit Parts
 * ======================================================
 *
 * Description
 * -----------
 * Write a program that prints all four-digit natural numbers divisible by
 * the sum of the two numbers formed from
 * their first two digits and last two digits.
 * At the end, print how many such numbers were found.
 *
 * Functions
 * ---------
 * Use a function that receives a four-digit number and returns the sum of
 * its two two-digit parts.
 *
 * Examples
 * --------
 *     3417 is divisible by 34 + 17.
 *     5265 is divisible by 52 + 65.
 *     6578 is divisible by 65 + 78.
 *
 * Input and Output
 * ----------------
 * No input is read.
 * Print the matching four-digit numbers and their total count.
 *
 * Source
 * ------
 * aud/presentations/6.html#exercise-2, section 4.2.
 */

#include <iostream>
using namespace std;

int sum(int number)
{
    int first_two = number / 100;
    int second_two = number % 100;

    return first_two + second_two;
}

int main()
{
    int counter = 0;
    for (int i = 1000; i <= 9999; ++i)
    {
        if (i % sum(i) == 0)
        {
            cout << i << " ";
            counter++;
        }
    }

    cout << "C = " << counter;
}
