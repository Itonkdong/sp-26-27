/*
 * Exercise 10: Consecutive Values with the Greatest Sum
 * =====================================================
 *
 * Description
 * -----------
 * Read an unknown number of integers and find the two consecutive values
 * with the greatest sum.
 * Stop when two negative integers are entered consecutively.
 *
 * Input and Output
 * ----------------
 * Read the sequence from the keyboard.
 * Print the positions of the consecutive values with the greatest sum,
 * counting positions from 1, and print their sum.
 * The terminating pair of consecutive negative values ends the input.
 *
 * Source
 * ------
 * aud/presentations/5.html#task-10, section 1.11.
 */

#include <iostream>
using namespace std;

int main()
{
    int input;
    int prev_input;

    if (!(cin >> prev_input >> input))
    {
        cout << "Input at least 2 numbers";
        return 0;
    }

    if (input < 0 && prev_input < 0)
    {
        cout << "Two negativ numbers at the start";
        return 0;
    }

    int max_sum = input + prev_input;
    int position = 2;
    int counter = 3;

    while (true)
    {
        cin >> input;
        if (input < 0 && prev_input < 0)
        {
            break;
        }
        if (input + prev_input > max_sum)
        {
            max_sum = input + prev_input;
            position = counter;
        }
        prev_input = input;
        counter++;
    }

    cout << "Max sum " << max_sum << endl;
    cout << "Position 1 = " << position << " position 2 = " << position - 1;
    return 0;
}
