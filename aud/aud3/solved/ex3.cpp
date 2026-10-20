/*
 * Exercise 3: Converting Exam Points to a Grade
 * =============================================
 *
 * Description
 * -----------
 * Write a program that reads the number of points earned on an exam and
 * prints the corresponding grade according to the following table.
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
 * Input and Output
 * ----------------
 * Read an integer number of points.
 * For a value from 0 to 100, print the corresponding grade.
 * Otherwise, print a message that the number of points is invalid.
 *
 * Source
 * ------
 * aud/presentations/3.html#exercise-3, section 3.3.
 * Grading table transcribed from the supplied source image.
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

    if (number_of_points <= 50)
    {
        cout << " Grade 5" << endl;
    }
    else if (number_of_points <= 60)
    {
        cout << " Grade 6" << endl;
    }
    else if (number_of_points <= 70)
    {
        cout << " Grade 7" << endl;
    }
    else if (number_of_points >= 71 && number_of_points <= 80)
    {
        cout << " Grade 8" << endl;
    }
    else if (number_of_points >= 81 && number_of_points <= 90)
    {
        cout << " Grade 9" << endl;
    }
    else
    {
        cout << " Grade 10" << endl;
    }
}
