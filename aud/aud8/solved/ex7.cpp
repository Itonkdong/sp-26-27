/*
 * Exercise 7: Removing Duplicate Array Elements
 * =============================================
 *
 * Description
 * -----------
 * Remove duplicate values from an array. Keep the first occurrence of each
 * value and preserve their order.
 *
 * Input and Output
 * ----------------
 * Read n, followed by n elements. Print the resulting array without
 * duplicates.
 *
 * Source
 * ------
 * aud/presentations/8.html#задача-7
 * Section 2.7.
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

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (array[i] == array[j])
            {
                for (int k = j; k < n - 1; ++k)
                {
                    array[k] = array[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    cout << "The new array is : " << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
}
