/*
 * Exercise 11: Extracting the First and Last Digits
 * =================================================
 *
 * Description
 * -----------
 * Write a program that reads a three-digit integer from the keyboard.
 * The program should print the most significant
 * and least significant digits of the number.
 *
 * Input and Output
 * ----------------
 * Read a three-digit integer.
 * Print its most significant and least significant digits.
 *
 * Example After Implementation
 * ----------------------------
 * Input:
 *     795
 *
 * Output:
 *     The most significant digit is 7, and the least significant is 5.
 *
 * Notes
 * -----
 * Use integer division and the modulo operator.
 *
 * Source
 * ------
 * aud/presentations/2.html#exercise-11, section 8.11.
 */

#include <iostream>
using namespace std;

int main()
{
    // 345
    int number;
    cin >> number;
    int most;
    int least;
    least = number % 10;
    most = number / 100;
    cout << "Most = " << most << endl;
    cout << "Least = " << least << endl;
}
