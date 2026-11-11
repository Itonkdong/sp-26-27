/*
 * Exercise 4: Prime Numbers with a Prime Digit Sum
 * ================================================
 *
 * Description
 * -----------
 * Write a program that prints all prime numbers less than 10000 whose sum of
 * digits is also prime.
 * At the end, print how many such numbers were found.
 *
 * Functions
 * ---------
 * Use functions to test whether a number is
 * prime and to calculate the sum of its digits.
 *
 * Input and Output
 * ----------------
 * No input is read.
 * Print the matching prime numbers and their total count.
 *
 * Source
 * ------
 * aud/presentations/6.html#exercise-4, section 4.4.
 */

#include <iostream>
using namespace std;

bool is_prime(int number)
{
    int counter = 0;
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
        {
            counter++;
        }
    }

    return counter == 2;
}

int sum_digits(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number = number / 10;
    }

    return sum;
}


int main()
{
    int counter = 0;
    for (int i = 2; i < 10000; ++i)
    {
        int sum_digits_1 = sum_digits(i);

        if (is_prime(i) && is_prime(sum_digits_1))
        {
            cout << i << " ";
            counter++;
        }
    }

    cout << endl;
    cout << "Counter = " << counter;
}
