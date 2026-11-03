/*
 * Exercise 5: Palindromic Numbers in a Range
 * ==========================================
 *
 * Description
 * -----------
 * Write a program that prints all numbers in a given range that read the
 * same from left to right and from right to left.
 *
 * Examples
 * --------
 *     Examples of palindromic numbers: 12321 and 5061605.
 *
 * Input and Output
 * ----------------
 * Read the lower and upper bounds of the range.
 * Print all matching numbers, including either bound if it matches.
 *
 * Source
 * ------
 * aud/presentations/5.html#task-5, section 1.6.
 */

#include <iostream>
using namespace std;

int main()
{
    int start;
    int end;
    cin >> start >> end;
    for (int i = start; i <= end; ++i)
    {
        int save = i;
        int revN = 0;
        while (save > 0)
        {
            int last_digit = save % 10;
            revN = revN * 10 + last_digit;
            save = save / 10;
        }
        if (i == revN)
        {
            cout << i << " ";
        }
    }

    return 0;
}
