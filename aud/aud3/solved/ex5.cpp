/*
 * Exercise 5: Checking for a Right Triangle and Calculating Its Area
 * ==================================================================
 *
 * Description
 * -----------
 * Read the lengths of three line segments in any order.
 * Check whether a triangle can be constructed from them.
 * If it can, determine whether it is a right triangle.

*
 *
 * Input and Output
 * ----------------
 * Read three side lengths.
 * If they cannot form a triangle, print an appropriate message.
 * Otherwise, print whether the triangle is right-angled.
 * For a right triangle, also print its area.
 *
 * Source
 * ------
 * aud/presentations/3.html#exercise-5, section 3.5.
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (((a + b <= c) || (a + c <= b) || (b + c <= a)))
    {
        cout << "Not a triangle";
        return 0;
    }

    if (a * a + b * b == c * c)
    {
        cout << " A right triangle";
        return 0;
    }

    if (a * a + c * c == b * b)
    {
        cout << " A right triangle";
        return 0;
    }

    if (b * b + c * c == a * a)
    {
        cout << " A right triangle";
        return 0;
    }

    cout << "Not a right triangle" << endl;
}
