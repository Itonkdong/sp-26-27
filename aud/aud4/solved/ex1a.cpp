/*
 * Exercise 1a: Summing Even Two-Digit Numbers
 * ===========================================
 *
 * Description
 * -----------
 * Write a program that calculates the sum of all even two-digit numbers.
 *
 * Input and Output
 * ----------------
 * No input is read.
 * Print the calculated sum.
 *
 * Source
 * ------
 * aud/presentations/4.html#task-1a, section 2.1.
 */

#include <iostream>
using namespace std;

int main()
{
    // [10, 99]
    //
    //
    int sum = 0;
    for (int i = 10; i < 100; ++i)
    {
        if (i % 2 == 0)
        {
            sum =  sum + i;
        }


    }
    cout << "The sum of all the even numbers from 10 till 100 is " << sum;

    return  0;
}
