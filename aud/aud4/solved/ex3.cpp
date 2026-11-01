/*
 * Exercise 3: Counting Remainders When Dividing by Three
 * ======================================================
 *
 * Description
 * -----------
 * Read n numbers and count how many are divisible by 3, how many leave a
 * remainder of 1 when divided by 3, and how many leave a remainder of 2.
 *
 * Variants
 * --------
 * Solve the task using each of these loop types:
 * - while
 * - do-while
 * - for
 *
 * Input and Output
 * ----------------
 * Read n, followed by n integers.
 * Print the three counts on separate lines, in remainder order 0, 1, 2.
 *
 * Source
 * ------
 * aud/presentations/4.html#task-3, section 2.4.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int number ;
    int rem1, rem2 , rem0;
    rem0 = 0;
    rem1 = 0;
    rem2 = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> number;

        int rem = number % 3;

        if (rem == 1)
        {
            rem1 ++;
        }
        else if (rem == 2)
        {
            rem2 ++;
        }
        else
        {
            rem0 ++;
        }
    }

    cout << " Rem0 = "<<rem0 <<endl;
    cout << " Rem1 = "<<rem1 <<endl;
    cout << " Rem2 = "<<rem2 <<endl;
}
