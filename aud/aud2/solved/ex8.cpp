/*
 * Exercise 8: Converting an Uppercase Letter to Lowercase
 * =======================================================
 *
 * Description
 * -----------
 * Write a program that reads an uppercase letter from standard input and
 * prints the same letter as lowercase.
 *
 * Input and Output
 * ----------------
 * Read an uppercase letter and print it
 * together with its lowercase equivalent.
 *
 * Notes
 * -----
 * Each character is represented by an ASCII number.
 *
 * Source
 * ------
 * aud/presentations/2.html#exercise-8, section 8.8.
 */

#include <iostream>
using namespace std;

int main()
{
    // v - > V
    // a - > A
    // ASCII
    // a - 97
    // b - 98
    // c - 99

    // A - 65
    // B - 66
    // C - 67
    char uppercase_letter;
    cin >> uppercase_letter;

    cout << 'a' - 'A';

    cout << (char) ((int) uppercase_letter + 32);
}
