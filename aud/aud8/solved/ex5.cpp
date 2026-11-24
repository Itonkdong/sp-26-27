/*
 * Exercise 5: Rotating an Array One Position Right
 * ================================================
 *
 * Description
 * -----------
 * Rotate an array one position to the right.
 *
 * Input and Output
 * ----------------
 * Read n, followed by n elements. Print the rotated array.
 *
 * Source
 * ------
 * aud/presentations/8.html#задача-5
 * Section 2.5.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[100];

    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    int put_this = array[0];
    int save;
    for (int i = 0; i < n - 1; ++i)
    {
        save = array[i + 1];
        array[i + 1] = put_this;

        put_this = save;
    }

    array[0] = put_this;

    cout << "The rotated array is:" << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
}
