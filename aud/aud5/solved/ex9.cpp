/*
 * Exercise 9: Comparing Sums at Odd and Even Positions
 * ====================================================
 *
 * Description
 * -----------
 * Read N integers and calculate the sums of the values at odd and even input
 * positions, counting positions from 1.
 * Compare the absolute difference between the sums with 10.
 *
 * Input and Output
 * ----------------
 * Read N, followed by N integers.
 * If the absolute difference is less than 10, print
 * "The two sums are similar".
 * Otherwise, print "The two sums differ greatly".
 *
 * Examples
 * --------
 *     For the 10 values: 2 4 3 4 2 1 1 6 1 7
 *     Sum at odd positions: 9
 *     Sum at even positions: 22
 *     Output: The two sums differ greatly
 *
 * Source
 * ------
 * aud/presentations/5.html#task-9, section 1.10.
 */

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int input;
    int sum_odd = 0;
    int sum_even = 0;
    for (int i = 1; i <= N; ++i)
    {
        int position = i;
        cin >> input;

        if (position % 2 == 0)
        {
            sum_even += input;
        }
        else
        {
            sum_odd += input;
        }
    }
    int difference = sum_even - sum_odd;
    int abs_difference;


    if (difference < 0)
    {
        abs_difference = (-1) * difference;
    }
    else
    {
        abs_difference = difference;
    }


    if (abs_difference > 10)
    {
        cout << "The two sums differ greatly";
    }
    else
    {
        cout << "The two sums are similar";
    }

    return 0;
}
