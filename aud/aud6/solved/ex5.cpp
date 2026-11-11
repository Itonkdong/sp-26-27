/*
 * Exercise 5: Finding Twin Prime Pairs
 * ====================================
 *
 * Description
 * -----------
 * Write a program that prints all pairs of
 * prime numbers less than 1000 that differ by 2.
 * At the end, print the number of pairs found.
 *
 * Functions
 * ---------
 * Use a function that tests whether a number is prime.
 *
 * Input and Output
 * ----------------
 * No input is read.
 * Print each matching pair once, followed by the total number of pairs.
 *
 * Source
 * ------
 * aud/presentations/6.html#exercise-5, section 4.5.
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


int main()
{
    int counter = 0;
    for (int i = 2; i < 1000; ++i)
    {
        int first_number = i;
        int second_number = i + 2;
        if (second_number >= 1000)
        {
            break;;
        }

        if (is_prime(first_number) && is_prime(second_number))
        {
            cout << first_number << " " << second_number << endl;
            counter++;
        }
    }

    cout << "Counter = " << counter;
}
