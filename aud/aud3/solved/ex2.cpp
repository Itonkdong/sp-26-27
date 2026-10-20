/*
 * Exercise 2: Locating a Point in the Coordinate Plane
 * ====================================================
 *
 * Description
 * -----------
 * Read the coordinates of a point in the plane
 * and print the quadrant to which it belongs.
 *
 * Boundary Cases
 * --------------
 * Consider points on either coordinate axis and the origin as well.
 * Identify the positive or negative axis when appropriate, or report that
 * the point is the origin.
 *
 * Input and Output
 * ----------------
 * Read two coordinates, x and y.
 * Print the point's quadrant or its position on an axis or at the origin.
 *
 * Source
 * ------
 * aud/presentations/3.html#exercise-2, section 3.2.
 */

#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "Origin" <<endl;
        return 0;
    }

    if (x != 0 && y == 0)
    {
        cout << "X axis" <<endl;
        return 0;
    }

    if (x == 0 && y != 0)
    {
        cout << "Y axis" <<endl;
        return 0;
    }

    if (x > 0)
    {
        if (y > 0)
        {
            cout << "Q1" <<endl;
        }
        else
        {
            cout << "Q4" << endl;
        }
    }
    else
    {
        if (y > 0)
        {
            cout << "Q2" <<endl;
        }
        else
        {
            cout << "Q3" << endl;
        }
    }


    if (x > 0 && y > 0)
    {
        cout << " Q1" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << " Q2" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << " Q3" << endl;
    }
    else
    {
        if (x > 0 && y < 0)
        {
            cout << " Q4" << endl;
        }
    }



    cout << " here "
}
