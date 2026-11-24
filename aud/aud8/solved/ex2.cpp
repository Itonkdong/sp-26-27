/*
 * Exercise 2: Even and Odd Array Statistics
 * =========================================
 *
 * Description
 * -----------
 * Calculate the sum of the even elements, the sum of the odd elements, and
 * the ratio of the number of even elements to the number of odd elements.
 *
 * Example
 * -------
 *     Array: 3 2 7 6 2 5 1
 *     Sum even: 10
 *     Sum odd: 16
 *     Rel: 0.75
 *
 * Input and Output
 * ----------------
 * Read n, followed by n integer array elements. Print the even sum, the odd
 * sum, and the ratio of the two counts.
 *
 * Source
 * ------
 * aud/presentations/8.html#задача-2
 * Section 2.2.
 */

#include <iostream>
using namespace std;

int main()
{
    int array[200];
    int size;
    cin >> size;

    for (int i = 0; i < size; ++i)
    {
        cin >> array[i];
    }

    int number_odd = 0;
    int number_even = 0;
    int sum_odd = 0;
    int sum_even = 0;

    for (int i = 0; i < size; ++i)
    {
        if (array[i] % 2 == 0)
        {
            number_even++;
            sum_even += array[i];
        }
        else
        {
            number_odd++;
            sum_odd += array[i];
        }
    }

    double ratio = number_even * 1.0 / number_odd;

    cout << "Sum odd " << sum_odd << endl;
    cout << "Sum even " << sum_even << endl;
    cout << "Ratio " << ratio;
}
