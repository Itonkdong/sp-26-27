/*
 * Exercise 8: Finding the Two Largest Values
 * ==========================================
 *
 * Description
 * -----------
 * Write a program that finds the two largest values among an unknown number
 * of integers entered from the keyboard.
 * Stop reading when an invalid integer representation is entered.
 *
 * Examples
 * --------
 *     Input sequence: 2 4 7 4 2 1 8 6 9 7 10 3
 *     Largest values: 10 and 9
 *
 * Input and Output
 * ----------------
 * Read integers until integer input fails.
 * Print the two largest values on separate lines.
 * If fewer than two integers were entered, print:
 * "Enter at least 2 numbers".
 *
 * Source
 * ------
 * aud/presentations/5.html#task-8, section 1.9.
 */

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    int max;
    int sec_max;

    if (!(cin >> a >> b))
    {
        cout << "You must input at least 2 numbers";
        return 0;
    }

    if (a > b)
    {
        max = a;
        sec_max = b;
    }
    else
    {
        max = b;
        sec_max = a;
    }

    int input;

    while (true)
    {
        if (!(cin >> input))
        {
            break;
        }

        if (input > max)
        {
            sec_max = max;
            max = input;
        }
        else if (input > sec_max)
        {
            sec_max = input;
        }
    }

    cout << "MAX = " << max << endl;
    cout << "2nd MAX = " << sec_max << endl;

    return 0;
}
