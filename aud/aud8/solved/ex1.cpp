/*
 * Exercise 1: Comparing Two Arrays
 * ================================
 *
 * Description
 * -----------
 * Read two arrays and determine whether they are equal. Each array has at
 * most 100 elements.
 *
 * Input and Output
 * ----------------
 * Read the two sizes first. If they differ, report that the arrays are
 * unequal. Otherwise, read the elements of each array and compare their
 * values in order. Print whether the arrays are equal.
 *
 * Source
 * ------
 * aud/presentations/8.html#задача-1
 * Section 2.1.
 */

#include <iostream>
using namespace std;

int main()
{
    int a1[100];
    int a2[100];


    int size1;
    int size2;

    cin >> size1;
    cin >> size2;

    if (size1 != size2)
    {
        cout << "Not";
        return 0;
    }

    for (int i = 0; i < size1; ++i)
    {
        cin >> a1[i];
    }

    for (int i = 0; i < size2; ++i)
    {
        cin >> a2[i];
    }

    for (int i = 0; i < size1; ++i)
    {
        if (a1[i] != a2[i])
        {
            cout << "Not";
            return 0;
        }
    }

    cout << "Yes";
}
