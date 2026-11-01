/*
 * Exercise 4: Adding Plus and Minus Signs to Exam Grades
 * ======================================================
 *
 * Description
 * -----------
 * Extend the previous exercise so that the grade may also have a "+" or "-"
 * suffix, depending on the last digit of the number of points.
 *
 * Grading Table
 * -------------
 *     Points     Grade
 *     0-50       5
 *     51-60      6
 *     61-70      7
 *     71-80      8
 *     81-90      9
 *     91-100     10
 *
 * Grade Signs
 * -----------
 *     Last digit     Sign
 *     1-3            -
 *     4-7            No sign (a blank space)
 *     8, 9, or 0     +
 *
 * Do not add either sign to grade 5.
 * Do not add a + sign to grade 10.
 *
 * Examples
 * --------
 *     81 points -> 9-
 *     94 points -> 10
 *     68 points -> 7+
 *
 * Input and Output
 * ----------------
 * Read an integer number of points.
 * For a value from 0 to 100, print the
 * grade with the appropriate sign, if any.
 * Otherwise, print a message that the number of points is invalid.
 *
 * Source
 * ------
 * aud/presentations/3.html#exercise-4, section 3.4.
 * Grading and sign tables transcribed from the supplied source images.
 */

#include <iostream>
using namespace std;

int main()
{
    int number_of_points;
    cin >> number_of_points;

    if (number_of_points < 0)
    {
        cout << "Invalid number of points " << endl;
        return 0;
    }

    if (number_of_points > 100)
    {
        cout << "Invalid number of points " << endl;
        return 0;
    }

    int grade = 0;

    if (number_of_points <= 50)
    {
        grade = 5;
    }
    else if (number_of_points <= 60)
    {
        grade = 6;
    }
    else if (number_of_points <= 70)
    {
        grade = 7;
    }
    else if (number_of_points >= 71 && number_of_points <= 80)
    {
        grade = 8;
    }
    else if (number_of_points >= 81 && number_of_points <= 90)
    {
        grade = 9;
    }
    else
    {
        grade = 10;
    }

    cout << "Grade " << grade;

    if (grade ==5)
    {
        return 0;
    }

    int last_digit = number_of_points % 10;

    if (last_digit >= 1 && last_digit <= 3)
    {
        cout <<"-";
    }
    else if (last_digit >= 8 || last_digit == 0)
    {
        if (grade != 10)
        {
            cout <<"+";
        }
    }


//     Last digit     Sign
// *     1-3            -
// *     4-7            No sign (a blank space)
// *     8, 9, or 0     +

}
