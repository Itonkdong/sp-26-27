/*
 * Exercise 6: Rotating an Array Multiple Positions Right
 * ======================================================
 *
 * Description
 * -----------
 * Rotate an array m positions to the right.
 *
 * Input and Output
 * ----------------
 * Read n, the number of rotations m, and then n array elements. Print the
 * array after the rotations.
 *
 * Source
 * ------
 * aud/presentations/8.html#задача-6
 * Section 2.6.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int array[100];

    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    for (int j = 0; j < m % n; ++j)
    {
        int put_this = array[0];
        int save;
        for (int i = 0; i < n - 1; ++i)
        {
            save = array[i + 1];
            array[i + 1] = put_this;

            put_this = save;
        }

        array[0] = put_this;
    }


    cout << "The rotated array is by " << m << " times is:" << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
}
